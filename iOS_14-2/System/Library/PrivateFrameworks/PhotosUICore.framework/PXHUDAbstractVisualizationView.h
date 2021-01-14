/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXHUDVisualizationDelegate.h>

@class PXHUDVisualization, NSString;

@interface PXHUDAbstractVisualizationView : UIView <PXHUDVisualizationDelegate> {

	PXHUDVisualization* _visualization;

}

@property (nonatomic,retain) PXHUDVisualization * visualization;              //@synthesize visualization=_visualization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXHUDVisualization *)visualization;
-(void)visualizationDidChange:(id)arg1 ;
-(void)setVisualization:(PXHUDVisualization *)arg1 ;
-(void)visualizationDidUpdate;
@end

