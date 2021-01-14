/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKUpdateBannerView.h>

@class NSArray;

@interface CKGroupUpdateBannerView : CKUpdateBannerView {

	NSArray* _groupUpdates;
	unsigned long long _updateBannerType;

}

@property (nonatomic,retain) NSArray * groupUpdates;                           //@synthesize groupUpdates=_groupUpdates - In the implementation block
@property (assign,nonatomic) unsigned long long updateBannerType;              //@synthesize updateBannerType=_updateBannerType - In the implementation block
-(unsigned long long)updateBannerType;
-(NSArray *)groupUpdates;
-(void)setUpdateBannerType:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 useNamedTitles:(BOOL)arg3 updates:(id)arg4 inUpdatesMode:(BOOL)arg5 ;
-(UIEdgeInsets)layoutMargins;
-(void)setGroupUpdates:(NSArray *)arg1 ;
-(id)getContactDisplayName:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateAvatarView;
-(id)cancelGlyph;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_updateSubtitleLabel;
-(double)maxLabelWidthForSize:(CGSize)arg1 ;
-(double)titleLabelAlignmentX;
-(void)_updateTitleLabel;
@end

