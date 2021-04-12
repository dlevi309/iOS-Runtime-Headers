/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {

	NSData* _rawToken;

}

@property (retain) NSData * rawToken;              //@synthesize rawToken=_rawToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBytes:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)descriptionInternal;
-(NSData *)rawToken;
-(void)setRawToken:(NSData *)arg1 ;
@end

