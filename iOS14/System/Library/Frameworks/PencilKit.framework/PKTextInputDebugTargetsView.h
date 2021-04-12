/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface PKTextInputDebugTargetsView : UIView {

	double _dashLinePhase;
	NSArray* _visualizationElements;

}

@property (nonatomic,copy) NSArray * visualizationElements;              //@synthesize visualizationElements=_visualizationElements - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSArray *)visualizationElements;
-(void)setVisualizationElements:(NSArray *)arg1 ;
@end

