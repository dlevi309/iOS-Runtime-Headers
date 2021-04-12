/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id discardableContentHandler; 
@property (nonatomic,copy,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) id provider; 
-(NSString *)localizedDescription;
-(NSURL *)url;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)provider;
-(id)cellIdentifier;
-(void)discardContent;
-(id)discardableContentHandler;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(id)initWithLocalizedDescription:(id)arg1 ;
@end

