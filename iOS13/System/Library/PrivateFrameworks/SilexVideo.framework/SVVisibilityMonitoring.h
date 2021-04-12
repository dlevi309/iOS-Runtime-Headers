/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVisibilityMonitoring <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) BOOL appeared; 
@property (nonatomic,readonly) double visiblePercentage; 
@property (nonatomic,__weak,readonly) id object; 
@required
-(id)object;
-(unsigned long long)state;
-(BOOL)appeared;
-(double)visiblePercentage;
-(void)onVisiblePercentageChange:(/*^block*/id)arg1;
-(void)onDidAppear:(/*^block*/id)arg1;
-(void)onDidDisappear:(/*^block*/id)arg1;
-(void)onWillAppear:(/*^block*/id)arg1;
-(void)onWillDisappear:(/*^block*/id)arg1;

@end

