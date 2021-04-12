/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKit/UIActivityItemSource.h>
#import <UIKit/UIActivityItemLinkPresentationSource.h>

@class NSItemProvider, NSString, NSURL;

@interface VUIShareURLActivityItem : NSObject <UIActivityItemSource, UIActivityItemLinkPresentationSource> {

	NSItemProvider* _itemProvider;
	NSString* _title;
	NSString* _subtitle;
	NSURL* _imageURL;
	NSURL* _shareURL;

}

@property (nonatomic,readonly) NSURL * shareURL;                    //@synthesize shareURL=_shareURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(NSURL *)shareURL;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURL:(id)arg4 ;
@end

