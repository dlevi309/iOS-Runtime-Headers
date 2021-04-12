/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/


@class UIViewFloatAnimatableProperty;

@interface _WGCarouselCellResizeContext : NSObject {

	BOOL _active;
	double _compactHeight;
	double _expandedHeight;
	UIViewFloatAnimatableProperty* _resizeProgress;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) double compactHeight;                                        //@synthesize compactHeight=_compactHeight - In the implementation block
@property (assign,nonatomic) double expandedHeight;                                       //@synthesize expandedHeight=_expandedHeight - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * resizeProgress;              //@synthesize resizeProgress=_resizeProgress - In the implementation block
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(double)expandedHeight;
-(UIViewFloatAnimatableProperty *)resizeProgress;
-(double)compactHeight;
-(void)setCompactHeight:(double)arg1 ;
-(void)setExpandedHeight:(double)arg1 ;
-(void)setResizeProgress:(UIViewFloatAnimatableProperty *)arg1 ;
@end

