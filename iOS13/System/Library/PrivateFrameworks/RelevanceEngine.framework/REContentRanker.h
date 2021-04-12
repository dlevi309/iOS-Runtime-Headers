/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REContentRankerProperties.h>

@class NSString;

@interface REContentRanker : NSObject <REContentRankerProperties> {

	REContentFeatureExtractor* _extractor;

}

@property (nonatomic,readonly) NSString * positiveContent; 
@property (nonatomic,readonly) NSString * negativeContent; 
-(id)init;
-(id)predict:(id)arg1 ;
-(BOOL)load:(id)arg1 error:(id*)arg2 ;
-(NSString *)positiveContent;
-(NSString *)negativeContent;
-(BOOL)save:(id)arg1 error:(id*)arg2 ;
-(BOOL)train:(id)arg1 isPositive:(BOOL)arg2 ;
-(long long)positiveMapSize;
-(long long)negativeMapSize;
@end

