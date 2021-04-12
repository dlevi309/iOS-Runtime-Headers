/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
*/


@protocol HSModelDelegate, OS_dispatch_queue;
@class NSObject;

@interface HSModel : NSObject {

	id<HSModelDelegate> delegate;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)getHSModelForEngineMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 numHSModels:(unsigned long long)arg3 modelBuffer:(char*)arg4 length:(unsigned long long)arg5 ;
@end

