/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriGeo.framework/SiriGeo
*/

#import <libobjc.A.dylib/INStopShareETAIntentHandling.h>

@interface SiriGeo.INStopShareETAIntentHandler : NSObject <INStopShareETAIntentHandling> {

	 logObject;
	 contactService;
	 sharedTripContact;

}
-(id)init;
-(void)handleStopShareETA:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmStopShareETA:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveRecipientsForStopShareETA:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

