/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface DIAttributeSecureImage : NSObject <NSSecureCoding> {

	NSData* _imageData;
	NSData* _signature;
	NSData* _flags;

}

@property (nonatomic,copy) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSData * signature;              //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy) NSData * flags;                  //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)signature;
-(NSData *)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)imageData;
-(void)setFlags:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithImageData:(id)arg1 signature:(id)arg2 flags:(id)arg3 ;
@end

