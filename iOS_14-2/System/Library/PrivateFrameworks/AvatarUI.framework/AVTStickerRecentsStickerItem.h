/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTStickerRecentsItem.h>

@class UIImage, NSString, NSURL;

@interface AVTStickerRecentsStickerItem : NSObject <AVTStickerRecentsItem> {

	BOOL _prereleaseSticker;
	UIImage* _image;
	NSString* _localizedDescription;
	/*^block*/id _provider;
	NSURL* _url;
	/*^block*/id discardableContentHandler;
	NSString* _avatarIdentifier;
	NSString* _stickerName;

}

@property (nonatomic,copy,readonly) NSString * avatarIdentifier;                             //@synthesize avatarIdentifier=_avatarIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerName;                                  //@synthesize stickerName=_stickerName - In the implementation block
@property (assign,getter=isPrereleaseSticker,nonatomic) BOOL prereleaseSticker;              //@synthesize prereleaseSticker=_prereleaseSticker - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription;                         //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) id provider;                                             //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) id discardableContentHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(UIImage *)arg1 ;
-(id)provider;
-(id)cellIdentifier;
-(NSURL *)url;
-(UIImage *)image;
-(void)discardContent;
-(id)discardableContentHandler;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(NSString *)localizedDescription;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithAvatarIdentifier:(id)arg1 stickerName:(id)arg2 localizedName:(id)arg3 stickerProvider:(/*^block*/id)arg4 ;
-(NSString *)stickerName;
-(BOOL)isPrereleaseSticker;
-(void)setPrereleaseSticker:(BOOL)arg1 ;
-(NSString *)avatarIdentifier;
@end

