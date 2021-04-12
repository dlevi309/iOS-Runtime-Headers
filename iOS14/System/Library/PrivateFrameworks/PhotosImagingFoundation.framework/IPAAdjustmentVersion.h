/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/


@class NSString;

@interface IPAAdjustmentVersion : NSObject {

	unsigned long long _majorVersion;
	unsigned long long _minorVersion;
	NSString* _platform;

}

@property (nonatomic,readonly) unsigned long long majorVersion;              //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long minorVersion;              //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,readonly) NSString * platform;                          //@synthesize platform=_platform - In the implementation block
+(void)initialize;
+(id)validatePlatformString:(id)arg1 ;
+(id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3 ;
+(id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 ;
+(id)versionFromArchivalRepresentation:(id)arg1 ;
-(NSString *)platform;
-(long long)compare:(id)arg1 ;
-(void)setMinorVersion:(unsigned long long)arg1 ;
-(id)debugDescription;
-(id)description;
-(unsigned long long)majorVersion;
-(unsigned long long)minorVersion;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)archivalRepresentation;
-(BOOL)isEqualToAdjustmentVersion:(id)arg1 ;
-(id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3 ;
@end

