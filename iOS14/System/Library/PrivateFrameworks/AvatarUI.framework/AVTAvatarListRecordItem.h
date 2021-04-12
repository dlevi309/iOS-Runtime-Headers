/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarListItem.h>

@protocol AVTAvatarRecord;
@class UIImage, NSString;

@interface AVTAvatarListRecordItem : NSObject <AVTAvatarListItem> {

	id<AVTAvatarRecord> _avatar;
	UIImage* _cachedImage;

}

@property (nonatomic,readonly) id<AVTAvatarRecord> avatar;              //@synthesize avatar=_avatar - In the implementation block
@property (assign,nonatomic,__weak) UIImage * cachedImage;              //@synthesize cachedImage=_cachedImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AVTAvatarRecord>)avatar;
-(void)setCachedImage:(UIImage *)arg1 ;
-(void)downcastWithRecordHandler:(/*^block*/id)arg1 imageHandler:(/*^block*/id)arg2 viewHandler:(/*^block*/id)arg3 ;
-(void)downcastWithRecordHandler:(/*^block*/id)arg1 viewHandler:(/*^block*/id)arg2 ;
-(unsigned long long)hash;
-(UIImage *)cachedImage;
-(id)initWithAvatar:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

