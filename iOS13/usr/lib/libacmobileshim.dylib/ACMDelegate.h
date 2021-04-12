/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACMExternalAppleConnectDelegate.h>

@class NSString;

@interface ACMDelegate : NSObject <ACMExternalAppleConnectDelegate> {

	unsigned char _finished;
	/*^block*/id copyTicketCompletion;

}

@property (assign) unsigned char finished;                          //@synthesize finished=_finished - In the implementation block
@property (copy) id copyTicketCompletion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setFinished:(unsigned char)arg1 ;
-(unsigned char)finished;
-(void)setCopyTicketCompletion:(id)arg1 ;
-(id)copyTicketCompletion;
-(void)appleConnect:(id)arg1 authenticationDidEndWithResponse:(id)arg2 ;
-(id)appleConnectParentViewController:(id)arg1 ;
@end

