/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@class NSArray, NSDictionary, RBEntitlementPredicate;

@interface RBAttributeTemplateGroup : NSObject {

	NSArray* _attributes;
	NSDictionary* _targetBundleProperties;
	RBEntitlementPredicate* _originatorEntitlements;
	RBEntitlementPredicate* _targetEntitlements;
	NSDictionary* _additionalRestrictions;

}

@property (nonatomic,retain) NSArray * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSDictionary * targetBundleProperties;              //@synthesize targetBundleProperties=_targetBundleProperties - In the implementation block
-(void)setTargetBundleProperties:(NSDictionary *)arg1 ;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSArray *)attributes;
-(id)description;
-(NSDictionary *)targetBundleProperties;
@end

