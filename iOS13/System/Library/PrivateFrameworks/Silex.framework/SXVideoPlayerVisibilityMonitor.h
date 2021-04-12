/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SVVisibilityMonitoring.h>

@class SVVisibilityMonitor, NSMutableArray, NSString;

@interface SXVideoPlayerVisibilityMonitor : NSObject <SVVisibilityMonitoring> {

	SVVisibilityMonitor* _visibilityMonitor;
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
@property (nonatomic,retain) SVVisibilityMonitor * visibilityMonitor;                 //@synthesize visibilityMonitor=_visibilityMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) BOOL appeared; 
@property (nonatomic,readonly) double visiblePercentage; 
@property (nonatomic,__weak,readonly) id object; 
-(id)object;
-(unsigned long long)state;
-(BOOL)appeared;
-(double)visiblePercentage;
-(void)onVisiblePercentageChange:(/*^block*/id)arg1 ;
-(void)onDidAppear:(/*^block*/id)arg1 ;
-(void)onDidDisappear:(/*^block*/id)arg1 ;
-(SVVisibilityMonitor *)visibilityMonitor;
-(void)onWillAppear:(/*^block*/id)arg1 ;
-(NSMutableArray *)willAppearBlocks;
-(NSMutableArray *)didAppearBlocks;
-(NSMutableArray *)willDisappearBlocks;
-(NSMutableArray *)didDisappearBlocks;
-(NSMutableArray *)visiblePercentageBlocks;
-(void)onWillDisappear:(/*^block*/id)arg1 ;
-(void)configureVisibilityMonitor:(id)arg1 ;
-(id)initWithVisibilityMonitor:(id)arg1 ;
-(void)setVisibilityMonitor:(SVVisibilityMonitor *)arg1 ;
@end

