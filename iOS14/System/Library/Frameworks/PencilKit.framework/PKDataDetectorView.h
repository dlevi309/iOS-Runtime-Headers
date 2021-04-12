/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIContextMenuInteractionDelegate_ForWebKitOnly.h>

@class PKDataDetectorItem, NSArray, UIContextMenuInteraction, NSDictionary, NSString;

@interface PKDataDetectorView : UIView <UIContextMenuInteractionDelegate_ForWebKitOnly> {

	PKDataDetectorItem* _item;
	double _drawingScale;
	NSArray* _allItems;
	UIContextMenuInteraction* _menuInteraction;
	NSDictionary* _dataDetectorContext;

}

@property (nonatomic,copy) NSArray * allItems;                                        //@synthesize allItems=_allItems - In the implementation block
@property (nonatomic,retain) UIContextMenuInteraction * menuInteraction;              //@synthesize menuInteraction=_menuInteraction - In the implementation block
@property (nonatomic,retain) NSDictionary * dataDetectorContext;                      //@synthesize dataDetectorContext=_dataDetectorContext - In the implementation block
@property (nonatomic,readonly) PKDataDetectorItem * item;                             //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) CGRect drawingBounds; 
@property (assign,nonatomic) double drawingScale;                                     //@synthesize drawingScale=_drawingScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(NSArray *)allItems;
-(CGRect)drawingBounds;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(PKDataDetectorItem *)item;
-(void)setAllItems:(NSArray *)arg1 ;
-(unsigned long long)accessibilityTraits;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityValue;
-(BOOL)hitTest:(CGPoint)arg1 ;
-(double)drawingScale;
-(id)accessibilityIdentifier;
-(id)initWithDataDetectorItem:(id)arg1 allItems:(id)arg2 ;
-(void)setDrawingScale:(double)arg1 ;
-(void)tapHandler:(id)arg1 ;
-(UIContextMenuInteraction *)menuInteraction;
-(NSDictionary *)dataDetectorContext;
-(void)_highlightWithCompletion:(/*^block*/id)arg1 ;
-(void)setMenuInteraction:(UIContextMenuInteraction *)arg1 ;
-(void)setDataDetectorContext:(NSDictionary *)arg1 ;
@end

