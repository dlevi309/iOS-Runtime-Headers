/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HMCameraClipEncryptedDataContext : NSObject <NSCopying> {

	NSData* _initializationVector;
	NSData* _ciphertext;
	NSData* _tag;

}

@property (copy,readonly) NSData * initializationVector;              //@synthesize initializationVector=_initializationVector - In the implementation block
@property (copy,readonly) NSData * ciphertext;                        //@synthesize ciphertext=_ciphertext - In the implementation block
@property (copy,readonly) NSData * tag;                               //@synthesize tag=_tag - In the implementation block
@property (copy,readonly) NSData * dataRepresentation; 
-(NSData *)dataRepresentation;
-(NSData *)tag;
-(NSData *)initializationVector;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)description;
-(NSData *)ciphertext;
-(unsigned long long)hash;
-(id)initWithInitializationVector:(id)arg1 ciphertext:(id)arg2 tag:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

