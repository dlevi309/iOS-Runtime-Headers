/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSDictionary, NSString;

@interface RBAttributeTemplateGroup : NSObject <BSDescriptionProviding> {

	NSArray* _attributes;
	NSDictionary* _originatorEntitlements;
	NSDictionary* _targetBundleProperties;

}

@property (nonatomic,retain) NSArray * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSDictionary * originatorEntitlements;              //@synthesize originatorEntitlements=_originatorEntitlements - In the implementation block
@property (nonatomic,copy) NSDictionary * targetBundleProperties;              //@synthesize targetBundleProperties=_targetBundleProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSDictionary *)originatorEntitlements;
-(void)setOriginatorEntitlements:(NSDictionary *)arg1 ;
-(NSDictionary *)targetBundleProperties;
-(void)setTargetBundleProperties:(NSDictionary *)arg1 ;
@end

