/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setView:(ARCoachingOverlayView *)arg1 ;
-(long long)requirements;
-(ARCoachingOverlayView *)view;
-(void)enter;
-(id)initWithView:(id)arg1 ;
-(BOOL)isViewActiveForState;
-(id)doAction:(long long)arg1 ;
@end

