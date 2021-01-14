/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSString;

@interface NUVersion : NSObject {

	long long _major;
	long long _minor;

}

@property (readonly) long long major;                              //@synthesize major=_major - In the implementation block
@property (readonly) long long minor;                              //@synthesize minor=_minor - In the implementation block
@property (readonly) NSString * stringRepresentation; 
+(id)regularExpression;
+(id)versionZero;
+(id)versionOne;
+(id)versionWithString:(id)arg1 error:(out id*)arg2 ;
+(BOOL)isValidVersionString:(id)arg1 error:(out id*)arg2 ;
+(BOOL)isValidVersionString:(id)arg1 error:(out id*)arg2 major:(id*)arg3 minor:(id*)arg4 ;
-(long long)compare:(id)arg1 ;
-(NSString *)stringRepresentation;
-(id)init;
-(id)debugDescription;
-(long long)minor;
-(id)description;
-(unsigned long long)hash;
-(long long)major;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMajor:(long long)arg1 minor:(long long)arg2 ;
@end

