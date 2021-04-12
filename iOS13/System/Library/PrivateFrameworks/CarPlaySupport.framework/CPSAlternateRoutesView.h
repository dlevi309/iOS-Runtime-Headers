/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSRouteRowInteracting.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>

@protocol CPSAlternateRouteSelecting;
@class NSArray, UIView, NSString;

@interface CPSAlternateRoutesView : UIView <CPSRouteRowInteracting, CPSLinearFocusProviding> {

	NSArray* _availableRouteChoices;
	unsigned long long _indexForSelectedRoute;
	id<CPSAlternateRouteSelecting> _selectionDelegate;
	UIView* _rowStack;

}

@property (nonatomic,retain) UIView * rowStack;                                                    //@synthesize rowStack=_rowStack - In the implementation block
@property (nonatomic,retain) NSArray * availableRouteChoices;                                      //@synthesize availableRouteChoices=_availableRouteChoices - In the implementation block
@property (assign,nonatomic) unsigned long long indexForSelectedRoute;                             //@synthesize indexForSelectedRoute=_indexForSelectedRoute - In the implementation block
@property (assign,nonatomic,__weak) id<CPSAlternateRouteSelecting> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredFocusEnvironments;
-(id<CPSAlternateRouteSelecting>)selectionDelegate;
-(void)setSelectionDelegate:(id<CPSAlternateRouteSelecting>)arg1 ;
-(id)_linearFocusItems;
-(void)didSelectRow:(id)arg1 representingRouteChoice:(id)arg2 ;
-(void)setIndexForSelectedRoute:(unsigned long long)arg1 ;
-(void)setRowStack:(UIView *)arg1 ;
-(UIView *)rowStack;
-(NSArray *)availableRouteChoices;
-(unsigned long long)indexForSelectedRoute;
-(void)_reloadRows;
-(void)setAvailableRouteChoices:(NSArray *)arg1 ;
@end

