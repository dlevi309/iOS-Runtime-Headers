/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSData *)tag;
-(NSData *)initializationVector;
-(NSData *)ciphertext;
-(id)initWithInitializationVector:(id)arg1 ciphertext:(id)arg2 tag:(id)arg3 ;
@end

