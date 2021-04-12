/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)compactHeight;
-(void)setActive:(BOOL)arg1 ;
-(UIViewFloatAnimatableProperty *)resizeProgress;
-(BOOL)isActive;
-(void)setResizeProgress:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)setCompactHeight:(double)arg1 ;
-(double)expandedHeight;
-(void)setExpandedHeight:(double)arg1 ;
@end

