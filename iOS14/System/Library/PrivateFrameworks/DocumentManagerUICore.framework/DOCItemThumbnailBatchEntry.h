/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/


@class DOCItemThumbnail;

@interface DOCItemThumbnailBatchEntry : NSObject {

	DOCItemThumbnail* _thumbnail;
	unsigned long long _fetchOptions;

}

@property (nonatomic,retain) DOCItemThumbnail * thumbnail;                 //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) unsigned long long fetchOptions;              //@synthesize fetchOptions=_fetchOptions - In the implementation block
-(DOCItemThumbnail *)thumbnail;
-(unsigned long long)fetchOptions;
-(void)setFetchOptions:(unsigned long long)arg1 ;
-(void)setThumbnail:(DOCItemThumbnail *)arg1 ;
@end

