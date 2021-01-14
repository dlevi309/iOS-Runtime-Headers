/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSMutableData, NSMutableIndexSet;

@interface CKOperationInMemoryAssetInfo : NSObject {

	NSMutableData* _assetContent;
	NSMutableIndexSet* _byteRanges;

}

@property (nonatomic,retain) NSMutableData * assetContent;                //@synthesize assetContent=_assetContent - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * byteRanges;              //@synthesize byteRanges=_byteRanges - In the implementation block
-(void)setAssetContent:(NSMutableData *)arg1 ;
-(id)init;
-(void)writeData:(id)arg1 atOffset:(unsigned long long)arg2 ;
-(BOOL)isContiguous;
-(id)assetContentWithError:(id*)arg1 expectedSignature:(id)arg2 ;
-(NSMutableIndexSet *)byteRanges;
-(void)setByteRanges:(NSMutableIndexSet *)arg1 ;
-(NSMutableData *)assetContent;
@end

