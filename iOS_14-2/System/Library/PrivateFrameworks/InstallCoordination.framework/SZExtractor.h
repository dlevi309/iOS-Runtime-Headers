/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)terminateStreamWithError:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1;
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1;
-(void)prepareForExtraction:(/*^block*/id)arg1;
-(void)setExtractorDelegate:(id)arg1;
-(id<SZExtractorDelegate>)extractorDelegate;

@end

