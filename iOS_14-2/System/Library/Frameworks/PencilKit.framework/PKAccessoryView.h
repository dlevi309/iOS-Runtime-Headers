/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>

@class PKDragIndicatorView, NSString;

@interface PKAccessoryView : UIView <PKEdgeLocatable> {

	unsigned long long _edgeLocation;
	PKDragIndicatorView* _dragIndicatorView;

}

@property (nonatomic,retain) PKDragIndicatorView * dragIndicatorView;              //@synthesize dragIndicatorView=_dragIndicatorView - In the implementation block
@property (assign,nonatomic) BOOL showsDragIndicator; 
@property (assign,nonatomic) unsigned long long edgeLocation;                      //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShowsDragIndicator:(BOOL)arg1 ;
-(PKDragIndicatorView *)dragIndicatorView;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(BOOL)showsDragIndicator;
-(void)setDragIndicatorView:(PKDragIndicatorView *)arg1 ;
@end

