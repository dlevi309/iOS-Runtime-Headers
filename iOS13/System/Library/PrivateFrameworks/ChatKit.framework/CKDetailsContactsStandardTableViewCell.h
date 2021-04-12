/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKDetailsContactsTableViewCell.h>

@class NSMutableArray;

@interface CKDetailsContactsStandardTableViewCell : CKDetailsContactsTableViewCell {

	NSMutableArray* _visibleButtons;

}

@property (nonatomic,retain) NSMutableArray * visibleButtons;              //@synthesize visibleButtons=_visibleButtons - In the implementation block
+(double)preferredHeight;
+(double)estimatedHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShowsLocation:(BOOL)arg1 ;
-(void)_updateVisibleButtons;
-(NSMutableArray *)visibleButtons;
-(void)setVisibleButtons:(NSMutableArray *)arg1 ;
@end

