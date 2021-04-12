/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSError, NSMutableData, NSMutableIndexSet;

@interface CKFetchRecordsAssetInfo : NSObject {

	NSError* _error;
	NSMutableData* _assetContent;
	NSMutableIndexSet* _byteRanges;

}

@property (nonatomic,retain) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableData * assetContent;                //@synthesize assetContent=_assetContent - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * byteRanges;              //@synthesize byteRanges=_byteRanges - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isContiguous;
-(NSMutableData *)assetContent;
-(void)setAssetContent:(NSMutableData *)arg1 ;
-(void)writeData:(id)arg1 atOffset:(id)arg2 ;
-(id)assetContentWithError:(id*)arg1 expectedSignature:(id)arg2 ;
-(NSMutableIndexSet *)byteRanges;
-(void)setByteRanges:(NSMutableIndexSet *)arg1 ;
@end

