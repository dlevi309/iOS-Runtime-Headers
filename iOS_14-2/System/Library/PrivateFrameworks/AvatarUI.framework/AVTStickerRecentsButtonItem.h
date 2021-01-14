/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTStickerRecentsItem.h>

@class UIImage, NSString, NSURL;

@interface AVTStickerRecentsButtonItem : NSObject <AVTStickerRecentsItem> {

	UIImage* _image;
	NSString* _localizedDescription;
	NSURL* _url;
	/*^block*/id discardableContentHandler;

}

@property (nonatomic,copy,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) id provider; 
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
-(id)initWithLocalizedDescription:(id)arg1 ;
@end

