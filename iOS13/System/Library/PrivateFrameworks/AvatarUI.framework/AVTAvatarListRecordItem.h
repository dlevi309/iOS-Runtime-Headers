/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarListItem.h>

@protocol AVTAvatarRecord;
@class NSString;

@interface AVTAvatarListRecordItem : NSObject <AVTAvatarListItem> {

	id<AVTAvatarRecord> _avatar;

}

@property (nonatomic,readonly) id<AVTAvatarRecord> avatar;              //@synthesize avatar=_avatar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<AVTAvatarRecord>)avatar;
-(id)initWithAvatar:(id)arg1 ;
-(void)downcastWithRecordHandler:(/*^block*/id)arg1 imageHandler:(/*^block*/id)arg2 viewHandler:(/*^block*/id)arg3 ;
-(void)downcastWithRecordHandler:(/*^block*/id)arg1 viewHandler:(/*^block*/id)arg2 ;
@end

