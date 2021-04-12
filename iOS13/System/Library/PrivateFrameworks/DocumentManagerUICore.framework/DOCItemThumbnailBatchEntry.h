/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setThumbnail:(DOCItemThumbnail *)arg1 ;
-(void)setFetchOptions:(unsigned long long)arg1 ;
-(unsigned long long)fetchOptions;
@end

