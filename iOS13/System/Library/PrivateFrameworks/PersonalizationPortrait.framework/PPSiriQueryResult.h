/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface PPSiriQueryResult : NSObject <NSCopying> {

	NSString* _qid;
	NSString* _domain;
	NSNumber* _confidence;

}

@property (nonatomic,readonly) NSString * qid;                     //@synthesize qid=_qid - In the implementation block
@property (nonatomic,readonly) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)siriQueryResultWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(NSNumber *)confidence;
-(id)initWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3 ;
-(BOOL)isEqualToSiriQueryResult:(id)arg1 ;
-(NSString *)qid;
@end

