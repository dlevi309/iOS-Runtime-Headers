/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSString;

@interface SGIdentityName : NSObject {

	NSString* _privFullName;
	NSString* _firstname;
	NSString* _surname;
	NSString* _middlename;
	NSString* _prefix;
	NSString* _suffix;

}

@property (nonatomic,readonly) NSString * firstname;               //@synthesize firstname=_firstname - In the implementation block
@property (nonatomic,readonly) NSString * surname;                 //@synthesize surname=_surname - In the implementation block
@property (nonatomic,readonly) NSString * middlename;              //@synthesize middlename=_middlename - In the implementation block
@property (nonatomic,readonly) NSString * prefix;                  //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) NSString * suffix;                  //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,readonly) NSString * fullName; 
+(void)initialize;
+(id)nameWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithWesternName:(id)arg1 ;
-(NSString *)fullName;
-(NSString *)prefix;
-(id)initWithSpanishName:(id)arg1 ;
-(NSString *)suffix;
-(id)initWithVietnameseName:(id)arg1 ;
-(NSString *)middlename;
-(id)initWithKoreanName:(id)arg1 ;
-(id)initWithJapaneseName:(id)arg1 ;
-(NSString *)firstname;
-(id)initWithChineseName:(id)arg1 ;
-(NSString *)surname;
-(id)segmentWesternNameWithNameParts:(id)arg1 andPrefix:(id)arg2 ;
-(id)toSGNameWithOrigin:(id)arg1 recordId:(id)arg2 extractionInfo:(id)arg3 ;
@end

