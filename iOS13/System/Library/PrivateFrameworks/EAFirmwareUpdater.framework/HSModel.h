/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
*/


@protocol HSModelDelegate, OS_dispatch_queue;
@class NSObject;

@interface HSModel : NSObject {

	id<HSModelDelegate> delegate;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)getHSModelForEngineMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 numHSModels:(unsigned long long)arg3 modelBuffer:(char*)arg4 length:(unsigned long long)arg5 ;
@end

