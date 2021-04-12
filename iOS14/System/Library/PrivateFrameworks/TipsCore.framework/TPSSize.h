/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface TPSSize : TPSSerializableObject <NSCopying, NSSecureCoding> {

	NSNumber* _width;
	NSNumber* _height;

}

@property (nonatomic,retain) NSNumber * width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) NSNumber * height;              //@synthesize height=_height - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)setHeight:(NSNumber *)arg1 ;
-(NSNumber *)width;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)height;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

