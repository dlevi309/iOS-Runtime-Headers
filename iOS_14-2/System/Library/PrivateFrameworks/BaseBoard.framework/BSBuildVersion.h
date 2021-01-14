/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSString;

@interface BSBuildVersion : NSObject {

	NSString* _stringRepresentation;
	long long _majorBuildNumber;
	NSString* _majorBuildLetterString;
	long long _minorBuildNumber;
	NSString* _minorBuildLetterString;

}

@property (nonatomic,readonly) long long majorBuildNumber;                          //@synthesize majorBuildNumber=_majorBuildNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * majorBuildLetterString;              //@synthesize majorBuildLetterString=_majorBuildLetterString - In the implementation block
@property (nonatomic,readonly) long long minorBuildNumber;                          //@synthesize minorBuildNumber=_minorBuildNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * minorBuildLetterString;              //@synthesize minorBuildLetterString=_minorBuildLetterString - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringRepresentation;                //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
+(id)fromString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)stringRepresentation;
-(id)init;
-(long long)minorBuildNumber;
-(NSString *)majorBuildLetterString;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isBefore:(id)arg1 withPrecision:(long long)arg2 ;
-(BOOL)isSameAs:(id)arg1 withPrecision:(long long)arg2 ;
-(BOOL)isBefore:(id)arg1 ;
-(NSString *)minorBuildLetterString;
-(long long)majorBuildNumber;
-(BOOL)isSameAs:(id)arg1 ;
-(BOOL)isAfter:(id)arg1 withPrecision:(long long)arg2 ;
-(BOOL)isAfter:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)_compareAgainstBuildVersion:(id)arg1 withPrecision:(long long)arg2 ;
@end

