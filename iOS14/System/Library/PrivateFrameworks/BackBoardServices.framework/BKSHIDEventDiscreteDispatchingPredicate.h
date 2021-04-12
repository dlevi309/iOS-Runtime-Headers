/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSString;

@interface BKSHIDEventDiscreteDispatchingPredicate : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying> {

	NSSet* _senderDescriptors;
	NSSet* _descriptors;

}

@property (nonatomic,copy,readonly) NSSet * senderDescriptors;              //@synthesize senderDescriptors=_senderDescriptors - In the implementation block
@property (nonatomic,copy,readonly) NSSet * descriptors;                    //@synthesize descriptors=_descriptors - In the implementation block
@property (nonatomic,copy,readonly) NSSet * displays; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(NSSet *)descriptors;
-(id)init;
-(NSSet *)displays;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSSet *)senderDescriptors;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(id)_initWithSourceDescriptors:(id)arg1 descriptors:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)specifiesDescriptor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)containsDescriptor:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

