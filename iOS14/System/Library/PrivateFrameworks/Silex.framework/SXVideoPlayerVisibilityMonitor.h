/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVisibilityMonitoring.h>

@class SXVisibilityMonitor, NSMutableArray, NSString;

@interface SXVideoPlayerVisibilityMonitor : NSObject <SXVisibilityMonitoring> {

	SXVisibilityMonitor* _visibilityMonitor;
	NSMutableArray* _willAppearBlocks;
	NSMutableArray* _didAppearBlocks;
	NSMutableArray* _visiblePercentageBlocks;
	NSMutableArray* _willDisappearBlocks;
	NSMutableArray* _didDisappearBlocks;

}

@property (nonatomic,readonly) NSMutableArray * willAppearBlocks;                     //@synthesize willAppearBlocks=_willAppearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * didAppearBlocks;                      //@synthesize didAppearBlocks=_didAppearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * visiblePercentageBlocks;              //@synthesize visiblePercentageBlocks=_visiblePercentageBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * willDisappearBlocks;                  //@synthesize willDisappearBlocks=_willDisappearBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * didDisappearBlocks;                   //@synthesize didDisappearBlocks=_didDisappearBlocks - In the implementation block
@property (nonatomic,retain) SXVisibilityMonitor * visibilityMonitor;                 //@synthesize visibilityMonitor=_visibilityMonitor - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) BOOL appeared; 
@property (nonatomic,readonly) double visiblePercentage; 
@property (nonatomic,__weak,readonly) id object; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)appeared;
-(id)object;
-(unsigned long long)state;
-(void)configureVisibilityMonitor:(id)arg1 ;
-(NSMutableArray *)willAppearBlocks;
-(void)onWillAppear:(/*^block*/id)arg1 ;
-(NSMutableArray *)didAppearBlocks;
-(void)onDidAppear:(/*^block*/id)arg1 ;
-(NSMutableArray *)willDisappearBlocks;
-(void)onWillDisappear:(/*^block*/id)arg1 ;
-(NSMutableArray *)didDisappearBlocks;
-(void)onDidDisappear:(/*^block*/id)arg1 ;
-(NSMutableArray *)visiblePercentageBlocks;
-(void)onVisiblePercentageChange:(/*^block*/id)arg1 ;
-(SXVisibilityMonitor *)visibilityMonitor;
-(double)visiblePercentage;
-(id)initWithVisibilityMonitor:(id)arg1 ;
-(void)setVisibilityMonitor:(SXVisibilityMonitor *)arg1 ;
@end

