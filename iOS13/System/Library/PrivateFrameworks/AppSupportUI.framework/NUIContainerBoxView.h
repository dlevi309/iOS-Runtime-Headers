/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)debugDictionary;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(BOOL)setNeedsInvalidation:(long long)arg1 ;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1 ;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(id)arrangedDescription;
-(void)populateBoxArrangementCells:(vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell> >*)arg1 ;
-(long long)_effectiveAlignmentForArrangedSubview:(id)arg1 inAxis:(long long)arg2 ;
@end

