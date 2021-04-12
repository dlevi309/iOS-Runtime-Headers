/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKit/UIActivityItemLinkPresentationSource.h>

@class PXLinkPresentationConfiguration, NSString;

@interface PXLinkPresentationActivityItemProvider : NSObject <UIActivityItemLinkPresentationSource> {

	PXLinkPresentationConfiguration* _configuration;

}

@property (nonatomic,readonly) PXLinkPresentationConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfiguration:(id)arg1 ;
-(PXLinkPresentationConfiguration *)configuration;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)_linkMetadataForConfiguration:(id)arg1 ;
@end

