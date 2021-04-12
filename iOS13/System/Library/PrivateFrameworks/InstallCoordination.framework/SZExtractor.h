/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/


@protocol SZExtractor <NSObject,NSSecureCoding>
@property (assign,nonatomic,__weak) id<SZExtractorDelegate> extractorDelegate; 
@property (nonatomic,readonly) BOOL doesConsumeExtractedData; 
@optional
-(void)prepareForExtractionToPath:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(BOOL)doesConsumeExtractedData;
-(BOOL)consumeExtractedDataIfNeeded;

@required
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1;
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1;
-(void)terminateStreamWithError:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)setExtractorDelegate:(id)arg1;
-(id<SZExtractorDelegate>)extractorDelegate;
-(void)prepareForExtraction:(/*^block*/id)arg1;

@end

