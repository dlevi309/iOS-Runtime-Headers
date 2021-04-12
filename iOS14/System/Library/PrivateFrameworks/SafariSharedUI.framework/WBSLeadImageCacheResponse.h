/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSSiteMetadataResponse.h>

@class UIImage;

@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse {

	UIImage* _thumbnail;

}

@property (nonatomic,readonly) UIImage * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
+(id)responseWithURL:(id)arg1 thumbnail:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(UIImage *)thumbnail;
-(id)initWithURL:(id)arg1 thumbnail:(id)arg2 ;
@end

