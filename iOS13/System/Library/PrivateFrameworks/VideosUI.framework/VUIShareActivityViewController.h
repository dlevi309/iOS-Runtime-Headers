/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ShareSheet/UIActivityViewController.h>

@class LPMetadataProvider, NSURL, TVImageProxy, NSString;

@interface VUIShareActivityViewController : UIActivityViewController {

	LPMetadataProvider* _pendingMessageMetadataProvider;
	NSURL* _sharingURL;
	TVImageProxy* _imageProxy;
	NSURL* _itemImageURL;
	NSString* _itemTitle;
	NSString* _itemSubtitle;

}

@property (nonatomic,retain) NSURL * itemImageURL;                 //@synthesize itemImageURL=_itemImageURL - In the implementation block
@property (nonatomic,retain) NSString * itemTitle;                 //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,retain) NSString * itemSubtitle;              //@synthesize itemSubtitle=_itemSubtitle - In the implementation block
+(void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 sourceView:(id)arg5 ;
+(void)shareMediaWithShareSheet:(id)arg1 ;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(NSString *)itemTitle;
-(void)_prepareActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setItemTitle:(NSString *)arg1 ;
-(void)setItemSubtitle:(NSString *)arg1 ;
-(void)setItemImageURL:(NSURL *)arg1 ;
-(NSString *)itemSubtitle;
-(NSURL *)itemImageURL;
@end

