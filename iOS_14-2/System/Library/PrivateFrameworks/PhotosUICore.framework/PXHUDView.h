/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMapTable, UIStackView;

@interface PXHUDView : UIView {

	NSMapTable* _visualizationToView;
	UIStackView* _stackView;

}

@property (nonatomic,retain) NSMapTable * visualizationToView;              //@synthesize visualizationToView=_visualizationToView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                       //@synthesize stackView=_stackView - In the implementation block
+(Class)visualizationClassToViewClass:(Class)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeVisualization:(id)arg1 ;
-(NSMapTable *)visualizationToView;
-(void)setVisualizationToView:(NSMapTable *)arg1 ;
-(void)addVisualization:(id)arg1 ;
-(UIStackView *)stackView;
-(id)initWithCoder:(id)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
@end

