/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/CKSearchResultSupplementryCell.h>

@class CKSpotlightQueryResult, CNContact, CKAvatarView, NSString;

@interface CKSearchAvatarSupplementryView : UICollectionReusableView <CKSearchResultSupplementryCell> {

	unsigned long long _parentContentType;
	CKSpotlightQueryResult* _associatedResult;
	CNContact* _contact;
	CKAvatarView* _avatarView;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) CKAvatarView * avatarView;                              //@synthesize avatarView=_avatarView - In the implementation block
@property (assign,nonatomic) unsigned long long parentContentType;                   //@synthesize parentContentType=_parentContentType - In the implementation block
@property (nonatomic,retain) CKSpotlightQueryResult * associatedResult;              //@synthesize associatedResult=_associatedResult - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                    //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
+(id)reuseIdentifier;
+(id)supplementaryViewType;
+(double)desiredZPosition;
-(void)prepareForReuse;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CKAvatarView *)avatarView;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setAssociatedResult:(CKSpotlightQueryResult *)arg1 ;
-(void)setParentContentType:(unsigned long long)arg1 ;
-(CKSpotlightQueryResult *)associatedResult;
-(void)_updateVisibilityIfNeeded;
-(void)_parentPreviewDidChange:(id)arg1 ;
-(unsigned long long)parentContentType;
@end

