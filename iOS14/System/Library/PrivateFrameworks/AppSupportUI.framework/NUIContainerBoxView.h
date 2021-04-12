/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerView.h>
#import <libobjc.A.dylib/_NUIBoxArrangementContainer.h>
#import <libobjc.A.dylib/_UIMultilineTextContentSizing.h>

@class NSString;

@interface NUIContainerBoxView : NUIContainerView <_NUIBoxArrangementContainer, _UIMultilineTextContentSizing> {

	NUIBoxArrangement* _arrangement;
	struct {
		unsigned horzAlign : 8;
		unsigned vertAlign : 8;
	}  _boxFlags;

}

@property (assign,nonatomic) long long horizontalAlignment; 
@property (assign,nonatomic) long long verticalAlignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerBoxViewWithArrangedSubviews:(id)arg1 ;
-(void)populateBoxArrangementCells:(vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell> >*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)calculateViewForLastBaselineLayout;
-(id)calculateViewForFirstBaselineLayout;
-(id)debugDictionary;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(id)arrangedDescription;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(long long)horizontalAlignment;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(long long)verticalAlignment;
-(BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1 ;
-(BOOL)setNeedsInvalidation:(long long)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)dealloc;
@end

