/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/DAFolderChangeConsumer.h>

@class MFConditionLock, MFDAFolderChangeResult;

@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer> {

	MFConditionLock* _conditionLock;
	MFDAFolderChangeResult* _result;

}
-(id)init;
-(void)folderChange:(id)arg1 finishedWithStatus:(long long)arg2 error:(id)arg3 ;
-(id)waitForResult;
@end

