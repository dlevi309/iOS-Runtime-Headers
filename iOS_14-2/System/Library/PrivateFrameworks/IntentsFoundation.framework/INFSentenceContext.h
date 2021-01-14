/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
*/


@class NSNumber;

@interface INFSentenceContext : NSObject {

	NSNumber* _number;
	unsigned long long _gender;

}

@property (nonatomic,copy) NSNumber * number;                        //@synthesize number=_number - In the implementation block
@property (assign,nonatomic) unsigned long long gender;              //@synthesize gender=_gender - In the implementation block
+(id)sentenceContext;
-(void)setNumber:(NSNumber *)arg1 ;
-(NSNumber *)number;
-(void)setGender:(unsigned long long)arg1 ;
-(unsigned long long)gender;
-(id)combinedWithContext:(id)arg1 ;
@end

