/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/PHAssetWriter.h>

@class AVAssetExportSession;

@interface PHVideoAssetWriter : PHAssetWriter {

	AVAssetExportSession* _exportSession;

}

@property (nonatomic,retain) AVAssetExportSession * exportSession;              //@synthesize exportSession=_exportSession - In the implementation block
-(id)request;
-(AVAssetExportSession *)exportSession;
-(void)setExportSession:(AVAssetExportSession *)arg1 ;
-(id)transfer;
-(unsigned long long)estimatedOutputSizeWithError:(id*)arg1 ;
-(unsigned long long)_estimatedOutputSizeWithError:(id*)arg1 ;
-(id)requestWithNetworkAccess:(BOOL)arg1 ;
@end

