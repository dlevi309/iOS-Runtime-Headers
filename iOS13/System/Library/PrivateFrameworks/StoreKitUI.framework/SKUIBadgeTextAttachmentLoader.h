/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class NSMapTable, SKUIResourceLoader, NSHashTable, NSString;

@interface SKUIBadgeTextAttachmentLoader : NSObject <SKUIArtworkRequestDelegate> {

	NSMapTable* _imageRequests;
	SKUIResourceLoader* _resourceLoader;
	NSHashTable* _stringViews;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithResourceLoader:(id)arg1 ;
-(void)connectStringView:(id)arg1 ;
-(void)disconnectStringView:(id)arg1 ;
-(BOOL)loadImageForBadge:(id)arg1 layout:(id)arg2 reason:(long long)arg3 ;
@end

