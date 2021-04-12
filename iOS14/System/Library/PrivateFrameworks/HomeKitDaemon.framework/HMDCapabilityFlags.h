/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMDCapabilityFlags : HMFObject <NSSecureCoding> {

	NSData* _bytesData;

}

@property (readonly) NSData * bytesData;              //@synthesize bytesData=_bytesData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)hasCapabilities:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCapabilities:(id)arg1 ;
-(id)initWithCapabilityOptions:(unsigned long long)arg1 ;
-(NSData *)bytesData;
@end

