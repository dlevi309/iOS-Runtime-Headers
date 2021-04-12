/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)qid;
-(NSNumber *)confidence;
-(id)init;
-(NSString *)domain;
-(id)initWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3 ;
-(BOOL)isEqualToSiriQueryResult:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

