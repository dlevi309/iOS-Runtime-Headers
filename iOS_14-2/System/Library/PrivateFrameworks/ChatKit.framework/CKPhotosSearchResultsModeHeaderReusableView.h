/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/CKSearchResultSupplementryCell.h>

@class UISegmentedControl, NSString;

@interface CKPhotosSearchResultsModeHeaderReusableView : UICollectionReusableView <CKSearchResultSupplementryCell> {

	UISegmentedControl* _control;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) UISegmentedControl * control;              //@synthesize control=_control - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supplementaryViewType;
+(double)desiredZPosition;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(UISegmentedControl *)control;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)layoutSubviews;
-(void)setControl:(UISegmentedControl *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)_controlIndexDidChange:(id)arg1 ;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
@end

