/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)reason;
-(NSString *)person2LocalIdentifier;
-(NSString *)person1LocalIdentifier;
-(id)initWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3 ;
@end

