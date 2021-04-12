/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXVisibilityMonitoring <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) BOOL appeared; 
@property (nonatomic,readonly) double visiblePercentage; 
@property (nonatomic,__weak,readonly) id object; 
@required
-(BOOL)appeared;
-(id)object;
-(unsigned long long)state;
-(void)onWillAppear:(/*^block*/id)arg1;
-(void)onDidAppear:(/*^block*/id)arg1;
-(void)onWillDisappear:(/*^block*/id)arg1;
-(void)onDidDisappear:(/*^block*/id)arg1;
-(void)onVisiblePercentageChange:(/*^block*/id)arg1;
-(double)visiblePercentage;

@end

