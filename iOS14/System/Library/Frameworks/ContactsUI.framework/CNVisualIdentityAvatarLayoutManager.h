/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


#import <ContactsUI/ContactsUI-Structs.h>
@class NSArray;

@interface CNVisualIdentityAvatarLayoutManager : NSObject {

	long long _maxAvatarCount;
	NSArray* _avatarLayerItems;
	NSArray* _avatarViewAdHocLayoutConfiguration;
	NSArray* _avatarViewLayoutConfiguration;

}

@property (nonatomic,retain) NSArray * avatarViewAdHocLayoutConfiguration;              //@synthesize avatarViewAdHocLayoutConfiguration=_avatarViewAdHocLayoutConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * avatarViewLayoutConfiguration;                   //@synthesize avatarViewLayoutConfiguration=_avatarViewLayoutConfiguration - In the implementation block
@property (nonatomic,readonly) long long maxAvatarCount;                                //@synthesize maxAvatarCount=_maxAvatarCount - In the implementation block
@property (nonatomic,retain) NSArray * avatarLayerItems;                                //@synthesize avatarLayerItems=_avatarLayerItems - In the implementation block
-(id)init;
-(long long)maxAvatarCount;
-(void)updateAvatarLayersForItemCount:(long long)arg1 inView:(id)arg2 ;
-(void)updateAvatarLayersForItemCount:(long long)arg1 inView:(id)arg2 withLayoutType:(unsigned long long)arg3 ;
-(NSArray *)avatarViewLayoutConfiguration;
-(void)updateLayer:(id)arg1 forItemCount:(long long)arg2 atIndex:(long long)arg3 inView:(id)arg4 withLayoutType:(unsigned long long)arg5 ;
-(NSArray *)avatarLayerItems;
-(void)updateAvatarLayersWithPrimaryAvatarForItemCount:(long long)arg1 inView:(id)arg2 ;
-(void)setAvatarLayerItems:(NSArray *)arg1 ;
-(id)layoutConfigurationForIndex:(long long)arg1 inItemCount:(long long)arg2 withLayoutType:(unsigned long long)arg3 ;
-(NSArray *)avatarViewAdHocLayoutConfiguration;
-(void)setAvatarViewAdHocLayoutConfiguration:(NSArray *)arg1 ;
-(void)setAvatarViewLayoutConfiguration:(NSArray *)arg1 ;
-(CGRect)avatarFrameForFocusedAvatarInView:(id)arg1 ;
@end

