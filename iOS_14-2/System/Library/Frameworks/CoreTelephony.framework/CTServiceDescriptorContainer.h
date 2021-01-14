/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTServiceDescriptorContainer : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _descriptors;

}

@property (nonatomic,retain) NSArray * descriptors;              //@synthesize descriptors=_descriptors - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDescriptors:(NSArray *)arg1 ;
-(NSArray *)descriptors;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDescriptors:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

