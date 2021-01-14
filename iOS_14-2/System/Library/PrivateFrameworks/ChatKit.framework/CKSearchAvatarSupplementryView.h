/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supplementaryViewType;
+(double)desiredZPosition;
+(id)reuseIdentifier;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)parentContentType;
-(void)_parentPreviewDidChange:(id)arg1 ;
-(void)prepareForReuse;
-(CKAvatarView *)avatarView;
-(void)layoutSubviews;
-(void)_updateVisibilityIfNeeded;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(CKSpotlightQueryResult *)associatedResult;
-(void)setAssociatedResult:(CKSpotlightQueryResult *)arg1 ;
-(void)setParentContentType:(unsigned long long)arg1 ;
@end

