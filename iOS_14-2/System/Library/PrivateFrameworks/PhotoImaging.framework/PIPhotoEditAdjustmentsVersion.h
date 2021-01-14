/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@class NSString;

@interface PIPhotoEditAdjustmentsVersion : NSObject {

	unsigned long long _majorVersion;
	unsigned long long _minorVersion;
	unsigned long long _subMinorVersion;
	NSString* _platform;

}

@property (nonatomic,__weak,readonly) NSString * string; 
@property (nonatomic,readonly) unsigned long long majorVersion;                 //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long minorVersion;                 //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long subMinorVersion;              //@synthesize subMinorVersion=_subMinorVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * platform;                        //@synthesize platform=_platform - In the implementation block
+(id)versionFromString:(id)arg1 ;
+(id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 platform:(id)arg4 ;
-(NSString *)platform;
-(long long)compare:(id)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)majorVersion;
-(unsigned long long)minorVersion;
-(unsigned long long)hash;
-(NSString *)string;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 platform:(id)arg4 ;
-(id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 subMinor:(unsigned long long)arg3 ;
-(long long)asOrderedInteger;
-(BOOL)isEqualToAdjustmentVersion:(id)arg1 ;
-(unsigned long long)subMinorVersion;
@end

