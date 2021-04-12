/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <ContactsUI/CNAvatarView.h>

@class SFContactImage;

@interface SearchUIContactsThumbnailView : CNAvatarView {

	BOOL _usesCompactWidth;
	BOOL _useCompactDisplay;
	SFContactImage* _contactImage;

}

@property (nonatomic,retain) SFContactImage * contactImage;              //@synthesize contactImage=_contactImage - In the implementation block
@property (assign,nonatomic) BOOL useCompactDisplay;                     //@synthesize useCompactDisplay=_useCompactDisplay - In the implementation block
@property (assign,nonatomic) BOOL usesCompactWidth;                      //@synthesize usesCompactWidth=_usesCompactWidth - In the implementation block
+(void)clearAvatarSettings;
+(id)avatarSettings;
-(void)updateWithRowModel:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)usesCompactWidth;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(BOOL)useCompactDisplay;
-(void)setContactImage:(SFContactImage *)arg1 ;
-(SFContactImage *)contactImage;
-(void)setContactImage:(id)arg1 useCompactDisplay:(BOOL)arg2 ;
-(void)setUseCompactDisplay:(BOOL)arg1 ;
-(void)setUsesCompactWidth:(BOOL)arg1 ;
@end

