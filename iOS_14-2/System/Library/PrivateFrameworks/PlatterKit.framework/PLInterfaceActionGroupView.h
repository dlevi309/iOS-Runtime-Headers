/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>

@class UIInterfaceActionGroupView, NSMutableDictionary, NSArray, NSString;

@interface PLInterfaceActionGroupView : UIView <MTVisualStylingProviderObservingPrivate, MTVisualStylingRequiring> {

	UIInterfaceActionGroupView* _actionsGroupView;
	BOOL _actionsDirty;
	NSMutableDictionary* _categoriesToProviders;
	double _cornerRadius;

}

@property (nonatomic,retain) NSArray * actions; 
@property (assign,nonatomic) double cornerRadius;                                         //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
+(void)initialize;
-(void)setActions:(NSArray *)arg1 ;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSArray *)requiredVisualStyleCategories;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(NSArray *)actions;
-(double)cornerRadius;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)_updateStylingOfInterfaceActionGroupView:(id)arg1 ;
-(id)_newInterfaceActionGroupViewWithActions:(id)arg1 ;
@end

