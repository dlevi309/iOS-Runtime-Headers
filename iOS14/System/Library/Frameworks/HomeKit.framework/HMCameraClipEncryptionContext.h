/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMCameraClipEncryptionContext : NSObject <NSCopying, NSSecureCoding> {

	NSData* _key;
	unsigned long long _scheme;

}

@property (copy,readonly) NSData * key;                      //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long scheme;              //@synthesize scheme=_scheme - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)scheme;
-(id)initWithKey:(id)arg1 scheme:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)key;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

