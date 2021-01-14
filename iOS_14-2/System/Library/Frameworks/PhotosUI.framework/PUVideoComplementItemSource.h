/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIActivityItemSource.h>

@class NSURL, PFVideoComplement, NSString;

@interface PUVideoComplementItemSource : NSObject <UIActivityItemSource> {

	NSURL* _bundleURL;
	PFVideoComplement* _videoComplement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)initWithVideoComplement:(id)arg1 ;
-(id)_initWithVideoComplement:(id)arg1 bundleAtURL:(id)arg2 ;
-(id)initWithVideoComplementBundleAtURL:(id)arg1 ;
-(id)activityViewControllerSubject:(id)arg1 ;
@end

