/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface HMFHardwareAddress : HMFObject <HMFObject, NSCopying, NSSecureCoding> {

	NSString* _formattedString;
	NSData* _data;

}

@property (readonly) unsigned long long length; 
@property (copy,readonly) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (copy,readonly) NSString * formattedString;                             //@synthesize formattedString=_formattedString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSString *)propertyDescription;
-(NSString *)formattedString;
-(id)initWithAddressData:(id)arg1 ;
-(BOOL)isEqualToAddress:(id)arg1 ;
-(id)initWithAddressString:(id)arg1 length:(unsigned long long)arg2 ;
@end

