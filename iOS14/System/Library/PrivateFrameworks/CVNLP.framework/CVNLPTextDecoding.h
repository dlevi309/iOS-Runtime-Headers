/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@protocol CVNLPTextDecoding <NSObject>
@required
-(id)decodingResultWithConfiguration:(id)arg1 withContext:(id)arg2;
-(id)greedyDecodingResultWithConfiguration:(id)arg1;
-(id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2;
-(id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2 context:(id)arg3;
-(id)greedyDecodingResult;

@end

