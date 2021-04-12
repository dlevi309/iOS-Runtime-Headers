/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _TVOrganizerCellView : UIView {

	NSArray* _components;
	long long _contentVerticalAlignment;
	NSArray* _filteredComponents;

}

@property (nonatomic,copy,readonly) NSArray * filteredComponents;              //@synthesize filteredComponents=_filteredComponents - In the implementation block
@property (nonatomic,copy) NSArray * components;                               //@synthesize components=_components - In the implementation block
@property (assign,nonatomic) long long contentVerticalAlignment;               //@synthesize contentVerticalAlignment=_contentVerticalAlignment - In the implementation block
-(NSArray *)components;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(long long)contentVerticalAlignment;
-(void)setComponents:(NSArray *)arg1 ;
-(void)setComponentsNeedUpdate;
-(NSArray *)filteredComponents;
-(void)_resetSubviews;
-(void)_verticallyStackComponents:(id)arg1 alignment:(long long)arg2 ;
-(CGSize)_sizeThatFitsComponents:(id)arg1 boundingSize:(CGSize)arg2 ;
-(void)_updateView:(id)arg1 maxViewWidth:(double)arg2 ;
-(long long)_alignmentFromView:(id)arg1 ;
@end

