/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HMFKey : HMFObject <NSSecureCoding, NSCopying> {

	NSString* _type;
	NSData* _data;
	unsigned long long _size;

}

@property (readonly) unsigned long long size;              //@synthesize size=_size - In the implementation block
@property (copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSData * data;                   //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)init;
-(unsigned long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSData *)data;
-(NSString *)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(id)arg1 size:(unsigned long long)arg2 data:(id)arg3 ;
@end

