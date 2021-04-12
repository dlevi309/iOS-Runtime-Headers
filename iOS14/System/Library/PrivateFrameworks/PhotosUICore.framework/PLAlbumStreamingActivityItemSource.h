/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKit/UIActivityItemsSource.h>
#import <UIKit/UIActivityItemSocialSource.h>
#import <UIKit/UIActivityItemSubjectSource.h>

@class PLCloudSharedAlbum, NSString;

@interface PLAlbumStreamingActivityItemSource : NSObject <UIActivityItemsSource, UIActivityItemSocialSource, UIActivityItemSubjectSource> {

	PLCloudSharedAlbum* _album;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(id)initWithAlbum:(id)arg1 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewControllerSubject:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
@end

