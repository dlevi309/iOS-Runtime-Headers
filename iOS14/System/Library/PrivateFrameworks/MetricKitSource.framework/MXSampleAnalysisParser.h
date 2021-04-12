/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
*/


@interface MXSampleAnalysisParser : NSObject
+(id)constructPayloadWithReport:(id)arg1 withType:(long long)arg2 ;
+(id)getCallStackForReport:(id)arg1 withType:(long long)arg2 ;
+(id)parseCallTree:(id)arg1 isAttributedThread:(BOOL)arg2 ;
+(id)parseCallTreeFrame:(id)arg1 withDepth:(unsigned long long)arg2 ;
+(void)sendDiagnosticReport:(id)arg1 forType:(long long)arg2 forSourceID:(long long)arg3 options:(id)arg4 ;
+(void)sendDiagnosticReport:(id)arg1 forType:(long long)arg2 forSourceID:(long long)arg3 ;
@end

