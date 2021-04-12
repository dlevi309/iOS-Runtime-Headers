/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class JFXCapturePreviewFrameStats, NSMutableArray, NSObject, NSString;

@interface JFXCapturePreviewStats : NSObject {

	JFXCapturePreviewFrameStats* _runningAverage;
	NSMutableArray* _stats;
	NSObject*<OS_dispatch_queue> _q;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)clear;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)print;
-(id)add:(id)arg1 ;
-(void)_print_NoLock;
-(id)runningAverage;
-(void)printSync;
@end

