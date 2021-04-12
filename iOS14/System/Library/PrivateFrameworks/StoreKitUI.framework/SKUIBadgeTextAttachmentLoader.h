/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

