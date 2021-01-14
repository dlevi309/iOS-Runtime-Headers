/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


@protocol AVStreamDataParserOutputHandling <NSObject>
@optional
-(void)streamDataParser:(id)arg1 didFailToParseStreamDataWithError:(id)arg2;
-(void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 withDiscontinuity:(BOOL)arg3;
-(void)streamDataParser:(id)arg1 didProvideMediaData:(opaqueCMSampleBufferRef)arg2 forTrackID:(int)arg3 mediaType:(id)arg4 flags:(unsigned long long)arg5;
-(void)streamDataParser:(id)arg1 didReachEndOfTrackWithTrackID:(int)arg2 mediaType:(id)arg3;
-(void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)arg1 forTrackID:(int)arg2;
-(void)streamDataParser:(id)arg1 didProvideContentKeyRequestInitializationData:(id)arg2 forTrackID:(int)arg3;

@end

