/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue, MKInfoCardTheme;
@class NSObject, NSMutableDictionary, CNAvatarImageRenderer;

@interface MKPlaceReviewAvatarGenerator : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _cachedMaskedImages;
	id<MKInfoCardTheme> _theme;
	CNAvatarImageRenderer* _monogrammer;

}

@property (nonatomic,retain) CNAvatarImageRenderer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
@property (assign,nonatomic,__weak) id<MKInfoCardTheme> theme;                 //@synthesize theme=_theme - In the implementation block
-(id<MKInfoCardTheme>)theme;
-(id)init;
-(void)setTheme:(id<MKInfoCardTheme>)arg1 ;
-(CNAvatarImageRenderer *)monogrammer;
-(void)setMonogrammer:(CNAvatarImageRenderer *)arg1 ;
-(void)avatarForReview:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)monogramForReviewerName:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

