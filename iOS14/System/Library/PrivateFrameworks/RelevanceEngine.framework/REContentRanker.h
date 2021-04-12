/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

