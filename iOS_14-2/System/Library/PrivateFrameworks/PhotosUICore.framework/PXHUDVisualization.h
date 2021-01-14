/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXHUDVisualizationDelegate;
@class UIColor, NSString;

@interface PXHUDVisualization : NSObject {

	UIColor* _color;
	NSString* _title;
	id<PXHUDVisualizationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXHUDVisualizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * color;                                             //@synthesize color=_color - In the implementation block
-(id<PXHUDVisualizationDelegate>)delegate;
-(UIColor *)color;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDelegate:(id<PXHUDVisualizationDelegate>)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)_notifyDelegateVisualizationDidChange;
-(NSString *)title;
@end

