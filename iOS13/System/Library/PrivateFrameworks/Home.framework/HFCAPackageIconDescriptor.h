/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFIconDescriptor.h>

@class NSString, NSDictionary;

@interface HFCAPackageIconDescriptor : NSObject <HFIconDescriptor> {

	BOOL _shouldForceLTR;
	NSString* _packageIdentifier;
	NSString* _state;
	NSDictionary* _iconModifiers;

}

@property (nonatomic,readonly) NSString * packageIdentifier;              //@synthesize packageIdentifier=_packageIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSDictionary * iconModifiers;              //@synthesize iconModifiers=_iconModifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL shouldForceLTR;                       //@synthesize shouldForceLTR=_shouldForceLTR - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)state;
-(NSString *)packageIdentifier;
-(BOOL)shouldForceLTR;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg1 ;
-(id)initWithPackageIdentifier:(id)arg1 state:(id)arg2 ;
-(id)initWithPackageIdentifier:(id)arg1 state:(id)arg2 modifiers:(id)arg3 ;
-(NSDictionary *)iconModifiers;
-(id)initWithPackageIdentifier:(id)arg1 ;
@end

