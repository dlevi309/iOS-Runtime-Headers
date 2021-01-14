/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/ProgressiveResultsHandlerProtocol.h>

@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol> {

	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}
-(void)completedWithError:(id)arg1 ;
-(void)receiveProgressiveContacts:(id)arg1 matchInfos:(id)arg2 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

