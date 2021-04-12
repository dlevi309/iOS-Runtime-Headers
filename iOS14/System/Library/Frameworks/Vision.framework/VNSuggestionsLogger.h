/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNClusteringLogger.h>

@interface VNSuggestionsLogger : VNClusteringLogger
-(id)initWithOptions:(id)arg1 logEnabled:(BOOL)arg2 ;
-(void)logString:(id)arg1 ;
-(void)logInputFaceIdsWithFlags:(id)arg1 ;
-(void)logSuggestons:(id)arg1 description:(id)arg2 ;
-(void)logAllSuggestons:(id)arg1 ;
-(void)logFilteredByInputQuerySuggestons:(id)arg1 ;
-(void)logConnectedGroups:(id)arg1 ;
-(void)logFinalSuggestionsList:(id)arg1 ;
@end

