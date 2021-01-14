/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)versionNumberString;
-(long long)majorVersion;
-(long long)minorVersion;
-(BOOL)olderThan:(id)arg1 ;
-(id)initWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 variant:(id)arg4 ;
-(NSString *)variantString;
-(long long)patchVersion;
@end

