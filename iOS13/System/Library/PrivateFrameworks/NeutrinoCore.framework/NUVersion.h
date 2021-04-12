/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(long long)compare:(id)arg1 ;
-(NSString *)stringRepresentation;
-(long long)major;
-(long long)minor;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(id)initWithMajor:(long long)arg1 minor:(long long)arg2 ;
@end

