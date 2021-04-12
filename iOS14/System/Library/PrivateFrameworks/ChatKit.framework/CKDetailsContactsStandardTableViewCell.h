/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKDetailsContactsTableViewCell.h>

@class NSMutableArray;

@interface CKDetailsContactsStandardTableViewCell : CKDetailsContactsTableViewCell {

	NSMutableArray* _visibleButtons;

}

@property (nonatomic,retain) NSMutableArray * visibleButtons;              //@synthesize visibleButtons=_visibleButtons - In the implementation block
+(double)estimatedHeight;
+(double)preferredHeight;
-(void)_updateVisibleButtons;
-(void)_hideAllButtons;
-(void)setVisibleButtons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)visibleButtons;
-(void)layoutSubviews;
-(void)setShowsLocation:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

