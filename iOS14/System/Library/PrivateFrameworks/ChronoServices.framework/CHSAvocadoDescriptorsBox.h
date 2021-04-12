/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSSet;

@interface CHSAvocadoDescriptorsBox : NSObject <NSSecureCoding> {

	NSDictionary* _descriptorsByExtensionIdentifier;

}

@property (nonatomic,copy,readonly) NSSet * descriptors; 
@property (nonatomic,copy,readonly) NSDictionary * descriptorsByExtensionIdentifier;              //@synthesize descriptorsByExtensionIdentifier=_descriptorsByExtensionIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)descriptors;
-(NSDictionary *)descriptorsByExtensionIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDescriptors:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

