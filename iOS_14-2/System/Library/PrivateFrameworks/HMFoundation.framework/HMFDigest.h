/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSArray;

@interface HMFDigest : HMFObject <HMFObject, NSCopying, NSSecureCoding> {

	long long _algorithm;
	NSData* _value;

}

@property (readonly) long long algorithm;                                         //@synthesize algorithm=_algorithm - In the implementation block
@property (copy,readonly) NSData * value;                                         //@synthesize value=_value - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)algorithm;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)propertyDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAlgorithm:(long long)arg1 value:(id)arg2 ;
@end

