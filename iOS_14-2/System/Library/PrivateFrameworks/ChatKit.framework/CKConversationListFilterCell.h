/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/CKConversationListFilterCellCommon.h>

@protocol CKConversationListFilterDelegate;
@class UISegmentedControl, NSString;

@interface CKConversationListFilterCell : UITableViewCell <CKConversationListFilterCellCommon> {

	id<CKConversationListFilterDelegate> _filterDelegate;
	UISegmentedControl* _filterControl;

}

@property (nonatomic,retain) UISegmentedControl * filterControl;                                      //@synthesize filterControl=_filterControl - In the implementation block
@property (assign,nonatomic,__weak) id<CKConversationListFilterDelegate> filterDelegate;              //@synthesize filterDelegate=_filterDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
+(double)defaultHeight:(long long)arg1 ;
+(long long)defaultCellStyle;
-(void)layoutSubviews;
-(void)setFilterControl:(UISegmentedControl *)arg1 ;
-(void)_filterCellSelectionChanged:(id)arg1 ;
-(UISegmentedControl *)filterControl;
-(id<CKConversationListFilterDelegate>)filterDelegate;
-(void)updateControl:(id)arg1 selectedIndex:(unsigned long long)arg2 isEnabeld:(BOOL)arg3 ;
-(void)setFilterDelegate:(id<CKConversationListFilterDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

