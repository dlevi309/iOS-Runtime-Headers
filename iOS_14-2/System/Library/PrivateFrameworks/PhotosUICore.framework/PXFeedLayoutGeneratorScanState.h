/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXFeedLayoutGeneratorScanState : NSObject {

	BOOL _scannedBatchHasCaption;
	long long _scanLocation;
	id _scannedBatchID;
	long long _scanSpecialSequenceCount;

}

@property (assign,nonatomic) long long scanLocation;                          //@synthesize scanLocation=_scanLocation - In the implementation block
@property (nonatomic,retain) id scannedBatchID;                               //@synthesize scannedBatchID=_scannedBatchID - In the implementation block
@property (assign,nonatomic) BOOL scannedBatchHasCaption;                     //@synthesize scannedBatchHasCaption=_scannedBatchHasCaption - In the implementation block
@property (assign,nonatomic) long long scanSpecialSequenceCount;              //@synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount - In the implementation block
-(id)scannedBatchID;
-(void)setScannedBatchID:(id)arg1 ;
-(void)setScannedBatchHasCaption:(BOOL)arg1 ;
-(BOOL)scannedBatchHasCaption;
-(long long)scanSpecialSequenceCount;
-(void)setScanSpecialSequenceCount:(long long)arg1 ;
-(void)setScanLocation:(long long)arg1 ;
-(long long)scanLocation;
@end

