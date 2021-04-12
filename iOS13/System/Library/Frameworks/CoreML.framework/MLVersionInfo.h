/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString;

@interface MLVersionInfo : NSObject {

	long long _majorVersion;
	long long _minorVersion;
	long long _patchVersion;
	NSString* _variantString;

}

@property (readonly) long long majorVersion;                                //@synthesize majorVersion=_majorVersion - In the implementation block
@property (readonly) long long minorVersion;                                //@synthesize minorVersion=_minorVersion - In the implementation block
@property (readonly) long long patchVersion;                                //@synthesize patchVersion=_patchVersion - In the implementation block
@property (readonly) NSString * variantString;                              //@synthesize variantString=_variantString - In the implementation block
@property (nonatomic,readonly) NSString * versionNumberString; 
@property (nonatomic,readonly) NSString * versionString; 
+(id)versionInfoWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 variant:(id)arg4 ;
+(id)versionInfoWithString:(id)arg1 ;
-(NSString *)versionString;
-(id)initWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 variant:(id)arg4 ;
-(NSString *)versionNumberString;
-(BOOL)olderThan:(id)arg1 ;
-(long long)majorVersion;
-(long long)minorVersion;
-(long long)patchVersion;
-(NSString *)variantString;
@end

