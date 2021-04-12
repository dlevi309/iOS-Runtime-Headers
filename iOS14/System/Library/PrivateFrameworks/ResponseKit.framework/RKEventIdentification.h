/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(void)dealloc;
-(id)initWithOwnedTokenSequences:(id)arg1 probabilities:(float*)arg2 ;
-(void)getTopKClassifications:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateClassifiedTokens:(/*^block*/id)arg1 ;
-(void)enumerateTopKClassificationsForEachString:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(SCD_Struct_RK2)topClassification;
-(NSArray *)tokenSequences;
@end

