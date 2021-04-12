/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)number;
-(void)setNumber:(NSNumber *)arg1 ;
-(unsigned long long)gender;
-(void)setGender:(unsigned long long)arg1 ;
-(id)combinedWithContext:(id)arg1 ;
@end

