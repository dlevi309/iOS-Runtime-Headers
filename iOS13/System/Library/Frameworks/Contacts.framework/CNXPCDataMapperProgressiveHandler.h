/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/ProgressiveResultsHandlerProtocol.h>

@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol> {

	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}
-(void)receiveProgressiveContacts:(id)arg1 matchInfos:(id)arg2 ;
-(void)completedWithError:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

