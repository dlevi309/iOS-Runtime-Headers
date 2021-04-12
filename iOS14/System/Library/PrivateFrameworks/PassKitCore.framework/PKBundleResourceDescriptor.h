/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKBundleResourceDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _extension;

}

@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * extension;              //@synthesize extension=_extension - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)withName:(id)arg1 extension:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)extension;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 extension:(id)arg2 ;
-(BOOL)isEqualToBundleResourceDescriptor:(id)arg1 ;
@end

