/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {

	int _cpuType;
	int _cpuSubtype;

}
+(void)initialize;
+(id)currentArchitecture;
+(id)anyArchitecture;
+(id)ppcArchitecture;
+(id)ppc32Architecture;
+(id)ppc64Architecture;
+(id)i386Architecture;
+(id)x86_32Architecture;
+(id)armArchitecture;
+(id)x86_64Architecture;
+(id)architectureWithCpuType:(int)arg1 cpuSubtype:(int)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)is32Bit;
-(id)description;
-(BOOL)is64Bit;
-(int)cpuSubtype;
-(int)cpuType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLittleEndian;
-(id)initWithCpuType:(int)arg1 cpuSubtype:(int)arg2 ;
-(BOOL)isEqualToArchitecture:(id)arg1 ;
-(BOOL)isBigEndian;
-(BOOL)matchesArchitecture:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

