/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcherResponse.h>

@class CPSClipMetadata, NSURL;

@interface LPFetcherClipMetadataResponse : LPFetcherResponse {

	CPSClipMetadata* _metadata;
	NSURL* _iconURL;

}

@property (nonatomic,copy,readonly) CPSClipMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSURL * iconURL;                         //@synthesize iconURL=_iconURL - In the implementation block
-(id)initWithClipMetadata:(id)arg1 iconURL:(id)arg2 fetcher:(id)arg3 ;
-(NSURL *)iconURL;
-(CPSClipMetadata *)metadata;
@end

