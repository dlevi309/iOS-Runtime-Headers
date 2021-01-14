/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSString;

@interface PLBuildVersion : NSObject {

	NSString* _stringRepresentation;
	long long _majorBuildNumber;
	NSString* _majorBuildLetterString;
	long long _minorBuildNumber;
	NSString* _minorBuildLetterString;

}

@property (nonatomic,copy,readonly) NSString * stringRepresentation;                //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (nonatomic,readonly) long long majorBuildNumber;                          //@synthesize majorBuildNumber=_majorBuildNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * majorBuildLetterString;              //@synthesize majorBuildLetterString=_majorBuildLetterString - In the implementation block
@property (nonatomic,readonly) long long minorBuildNumber;                          //@synthesize minorBuildNumber=_minorBuildNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * minorBuildLetterString;              //@synthesize minorBuildLetterString=_minorBuildLetterString - In the implementation block
+(id)currentBuildVersionString;
-(id)initWithString:(id)arg1 ;
-(NSString *)stringRepresentation;
-(long long)minorBuildNumber;
-(NSString *)majorBuildLetterString;
-(id)description;
-(long long)compareBuildVersion:(id)arg1 withPrecision:(long long)arg2 ;
-(long long)compareBuildVersionString:(id)arg1 withPrecision:(long long)arg2 ;
-(NSString *)minorBuildLetterString;
-(long long)majorBuildNumber;
@end

