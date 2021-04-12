/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSString;

@interface PHAMergeCandidatePair : NSObject {

	unsigned long long _hash;
	NSString* _person1LocalIdentifier;
	NSString* _person2LocalIdentifier;
	NSString* _reason;

}

@property (readonly) NSString * person1LocalIdentifier;              //@synthesize person1LocalIdentifier=_person1LocalIdentifier - In the implementation block
@property (readonly) NSString * person2LocalIdentifier;              //@synthesize person2LocalIdentifier=_person2LocalIdentifier - In the implementation block
@property (readonly) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
+(id)mergeCandidatePairWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3 ;
-(id)description;
-(NSString *)reason;
-(unsigned long long)hash;
-(id)initWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3 ;
-(NSString *)person1LocalIdentifier;
-(NSString *)person2LocalIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

