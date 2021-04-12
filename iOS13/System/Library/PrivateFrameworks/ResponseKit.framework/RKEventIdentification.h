/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class NSArray;

@interface RKEventIdentification : NSObject {

	NSArray* _tokenSequences;
	float* _probabilities;

}

@property (nonatomic,readonly) NSArray * tokenSequences;              //@synthesize tokenSequences=_tokenSequences - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithOwnedTokenSequences:(id)arg1 probabilities:(float*)arg2 ;
-(void)getTopKClassifications:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateClassifiedTokens:(/*^block*/id)arg1 ;
-(void)enumerateTopKClassificationsForEachString:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(SCD_Struct_RK2)topClassification;
-(NSArray *)tokenSequences;
@end

