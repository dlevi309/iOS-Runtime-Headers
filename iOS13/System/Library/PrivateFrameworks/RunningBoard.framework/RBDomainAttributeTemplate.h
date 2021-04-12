/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDictionary, NSArray;

@interface RBDomainAttributeTemplate : NSObject <BSDescriptionProviding> {

	NSString* _domain;
	NSString* _name;
	NSDictionary* _originatorEntitlements;
	NSDictionary* _targetBundleProperties;
	NSString* _endowmentNamespace;
	NSArray* _attributeGroups;

}

@property (nonatomic,copy) NSString * domain;                                   //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * originatorEntitlements;               //@synthesize originatorEntitlements=_originatorEntitlements - In the implementation block
@property (nonatomic,copy) NSDictionary * targetBundleProperties;               //@synthesize targetBundleProperties=_targetBundleProperties - In the implementation block
@property (nonatomic,copy) NSString * endowmentNamespace;                       //@synthesize endowmentNamespace=_endowmentNamespace - In the implementation block
@property (nonatomic,retain) NSArray * attributeGroups;                         //@synthesize attributeGroups=_attributeGroups - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullyQualifiedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)name;
-(NSString *)domain;
-(void)setName:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)endowmentNamespace;
-(NSString *)fullyQualifiedName;
-(NSDictionary *)originatorEntitlements;
-(void)setOriginatorEntitlements:(NSDictionary *)arg1 ;
-(NSDictionary *)targetBundleProperties;
-(void)setTargetBundleProperties:(NSDictionary *)arg1 ;
-(void)setEndowmentNamespace:(NSString *)arg1 ;
-(NSArray *)attributeGroups;
-(void)setAttributeGroups:(NSArray *)arg1 ;
@end

