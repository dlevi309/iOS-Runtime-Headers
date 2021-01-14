/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TITypingSessionAnalyzing.h>

@class NSString;

@interface TITypingSpeedDetailsAnalyzer : NSObject <TITypingSessionAnalyzing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2 ;
-(BOOL)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3 ;
-(void)registerEventSpec;
@end

