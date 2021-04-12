/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PFCanceler, PHImportAsset;

@interface PHImportAssetDataRequest : NSObject {

	PFCanceler* _canceler;
	unsigned char _type;
	unsigned char _priority;
	unsigned long long _longestSide;
	/*^block*/id _cancelBlock;
	PHImportAsset* _asset;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id cancelBlock;                                  //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,retain) PHImportAsset * asset;                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PHImportAsset * requestAsset; 
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) unsigned char type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long longestSide;              //@synthesize longestSide=_longestSide - In the implementation block
@property (nonatomic,readonly) unsigned char priority;                      //@synthesize priority=_priority - In the implementation block
+(id)stringForRequestType:(unsigned char)arg1 ;
-(id)init;
-(unsigned char)type;
-(void)cancel;
-(unsigned char)priority;
-(PHImportAsset *)asset;
-(void)setAsset:(PHImportAsset *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(BOOL)isCanceled;
-(id)initWithAsset:(id)arg1 type:(unsigned char)arg2 longestSide:(unsigned long long)arg3 priority:(unsigned char)arg4 ;
-(PHImportAsset *)requestAsset;
-(unsigned long long)longestSide;
@end

