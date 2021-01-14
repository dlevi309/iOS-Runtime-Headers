/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
*/

#import <AlgosScoreFramework/AlgosScoreDataCSV.h>

@class NSDictionary;

@interface AlgosScoreFaceTimeDataCSV : AlgosScoreDataCSV {

	NSDictionary* _methods;

}

@property (nonatomic,retain) NSDictionary * methods;              //@synthesize methods=_methods - In the implementation block
+(id)facetimeDataCSV;
-(int)transformer;
-(NSDictionary *)methods;
-(id)init;
-(id)setUpMethods;
-(void)setMethods:(NSDictionary *)arg1 ;
-(BOOL)matchesMethod:(id)arg1 code:(long long)arg2 ;
-(BOOL)validMethod:(long long)arg1 ;
@end

