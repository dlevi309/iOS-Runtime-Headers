/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/PHAssetWriter.h>

@class AVAssetExportSession;

@interface PHVideoAssetWriter : PHAssetWriter {

	AVAssetExportSession* _exportSession;

}

@property (nonatomic,retain) AVAssetExportSession * exportSession;              //@synthesize exportSession=_exportSession - In the implementation block
-(id)request;
-(id)transfer;
-(void)setExportSession:(AVAssetExportSession *)arg1 ;
-(AVAssetExportSession *)exportSession;
-(unsigned long long)estimatedOutputSizeWithError:(id*)arg1 ;
-(unsigned long long)_estimatedOutputSizeWithError:(id*)arg1 ;
-(id)requestWithNetworkAccess:(BOOL)arg1 ;
@end

