/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@protocol AXSSMotionTrackingVideoFileInputManagerDelegate;
@class NSMutableArray, NSArray;

@interface AXSSMotionTrackingVideoFileInputManager : NSObject {

	BOOL __monitoring;
	id<AXSSMotionTrackingVideoFileInputManagerDelegate> _delegate;
	NSMutableArray* __videoFileInputNames;

}

@property (assign,nonatomic) BOOL _monitoring;                                                                 //@synthesize _monitoring=__monitoring - In the implementation block
@property (nonatomic,retain) NSMutableArray * _videoFileInputNames;                                            //@synthesize _videoFileInputNames=__videoFileInputNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoFileInputNames; 
@property (assign,nonatomic,__weak) id<AXSSMotionTrackingVideoFileInputManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)allowVideoFileInput;
-(id)init;
-(void)dealloc;
-(id<AXSSMotionTrackingVideoFileInputManagerDelegate>)delegate;
-(void)setDelegate:(id<AXSSMotionTrackingVideoFileInputManagerDelegate>)arg1 ;
-(void)_update;
-(void)startMonitoring;
-(void)stopMonitoring;
-(BOOL)_monitoring;
-(void)set_monitoring:(BOOL)arg1 ;
-(NSMutableArray *)_videoFileInputNames;
-(NSArray *)videoFileInputNames;
-(void)_videoFileInputNamesChanged:(id)arg1 ;
-(void)set_videoFileInputNames:(NSMutableArray *)arg1 ;
@end

