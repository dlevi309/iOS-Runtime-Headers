/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSSet *)displays;
-(NSSet *)descriptors;
-(BOOL)specifiesDescriptor:(id)arg1 ;
-(BOOL)containsDescriptor:(id)arg1 ;
-(NSSet *)senderDescriptors;
-(id)_initWithSourceDescriptors:(id)arg1 descriptors:(id)arg2 ;
@end

