/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHImportAssetDataRequest.h>

@interface PHImportAssetThumbnailDataRequest : PHImportAssetDataRequest {

	/*^block*/id _completionHandler;
	unsigned char _priority;
	unsigned long long _longestSide;

}

@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long longestSide;              //@synthesize longestSide=_longestSide - In the implementation block
@property (nonatomic,readonly) unsigned char priority;                      //@synthesize priority=_priority - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)description;
-(id)requestAsset;
-(id)initWithAsset:(id)arg1 longestSide:(unsigned long long)arg2 priority:(unsigned char)arg3 ;
-(unsigned long long)longestSide;
-(unsigned char)priority;
@end

