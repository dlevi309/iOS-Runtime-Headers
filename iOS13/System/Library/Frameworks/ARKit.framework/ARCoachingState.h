/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class ARCoachingOverlayView;

@interface ARCoachingState : NSObject {

	ARCoachingOverlayView* _view;

}

@property (assign,nonatomic,__weak) ARCoachingOverlayView * view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) long long requirements; 
@property (nonatomic,readonly) BOOL isViewActiveForState; 
-(void)exit;
-(long long)requirements;
-(ARCoachingOverlayView *)view;
-(void)setView:(ARCoachingOverlayView *)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)enter;
-(BOOL)isViewActiveForState;
-(id)doAction:(long long)arg1 ;
@end

