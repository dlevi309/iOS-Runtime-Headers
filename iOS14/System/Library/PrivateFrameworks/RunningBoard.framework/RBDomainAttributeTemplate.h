/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@class NSArray, NSString, RBEntitlementPredicate, NSDictionary;

@interface RBDomainAttributeTemplate : NSObject {

	NSArray* _attributeGroups;
	NSString* _domain;
	NSString* _name;
	RBEntitlementPredicate* _originatorEntitlements;
	NSDictionary* _targetBundleProperties;
	RBEntitlementPredicate* _targetEntitlements;
	NSDictionary* _additionalRestrictions;
	NSString* _endowmentNamespace;

}

@property (nonatomic,retain) NSArray * attributeGroups;              //@synthesize attributeGroups=_attributeGroups - In the implementation block
-(id)description;
-(NSArray *)attributeGroups;
-(void)setAttributeGroups:(NSArray *)arg1 ;
@end

