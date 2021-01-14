/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMAccessoryOwnershipToken : NSObject <NSSecureCoding> {

	NSData* _internalData;

}

@property (nonatomic,retain) NSData * internalData;              //@synthesize internalData=_internalData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setInternalData:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)internalData;
-(id)initWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

