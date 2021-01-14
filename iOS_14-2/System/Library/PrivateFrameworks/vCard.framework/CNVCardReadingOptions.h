/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@class NSArray;

@interface CNVCardReadingOptions : NSObject {

	BOOL _useConcurrentParsing;
	unsigned long long _contactLimit;
	NSArray* _propertiesToFetch;
	unsigned long long _maximumValueLength;

}

@property (assign,nonatomic) unsigned long long contactLimit;                    //@synthesize contactLimit=_contactLimit - In the implementation block
@property (nonatomic,copy) NSArray * propertiesToFetch;                          //@synthesize propertiesToFetch=_propertiesToFetch - In the implementation block
@property (assign,nonatomic) unsigned long long maximumValueLength;              //@synthesize maximumValueLength=_maximumValueLength - In the implementation block
@property (assign,nonatomic) BOOL useConcurrentParsing;                          //@synthesize useConcurrentParsing=_useConcurrentParsing - In the implementation block
-(void)setPropertiesToFetch:(NSArray *)arg1 ;
-(id)init;
-(void)setContactLimit:(unsigned long long)arg1 ;
-(void)setMaximumValueLength:(unsigned long long)arg1 ;
-(id)description;
-(NSArray *)propertiesToFetch;
-(unsigned long long)contactLimit;
-(unsigned long long)maximumValueLength;
-(BOOL)useConcurrentParsing;
-(void)setUseConcurrentParsing:(BOOL)arg1 ;
@end

