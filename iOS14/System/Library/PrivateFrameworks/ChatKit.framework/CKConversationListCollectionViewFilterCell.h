/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UISegmentedControl;

@interface CKConversationListCollectionViewFilterCell : UICollectionViewCell {

	UISegmentedControl* _filterControl;

}

@property (nonatomic,retain) UISegmentedControl * filterControl;              //@synthesize filterControl=_filterControl - In the implementation block
+(id)reuseIdentifier;
+(double)defaultHeight:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)setFilterControl:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)filterControl;
-(void)configureForTitles:(id)arg1 ;
@end

