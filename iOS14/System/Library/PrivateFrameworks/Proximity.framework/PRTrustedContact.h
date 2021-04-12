/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PRTrustedContact : NSObject <NSSecureCoding, NSCopying> {

	NSData* _contactKey;

}

@property (readonly) NSData * contactKey;              //@synthesize contactKey=_contactKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSData *)contactKey;
-(id)initWithContactKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

