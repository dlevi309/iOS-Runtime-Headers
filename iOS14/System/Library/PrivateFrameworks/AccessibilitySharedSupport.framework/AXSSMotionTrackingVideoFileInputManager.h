/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopMonitoring;
-(id)init;
-(id<AXSSMotionTrackingVideoFileInputManagerDelegate>)delegate;
-(void)startMonitoring;
-(void)setDelegate:(id<AXSSMotionTrackingVideoFileInputManagerDelegate>)arg1 ;
-(void)_update;
-(BOOL)_monitoring;
-(void)dealloc;
-(void)set_monitoring:(BOOL)arg1 ;
-(NSMutableArray *)_videoFileInputNames;
-(NSArray *)videoFileInputNames;
-(void)_videoFileInputNamesChanged:(id)arg1 ;
-(void)set_videoFileInputNames:(NSMutableArray *)arg1 ;
@end

