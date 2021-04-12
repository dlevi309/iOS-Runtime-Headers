/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSSceneIdentity, FBSSceneClientIdentity, FBSSceneSpecification, NSString;

@interface FBSSceneDefinition : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {

	FBSSceneIdentity* _identity;
	FBSSceneClientIdentity* _clientIdentity;
	FBSSceneSpecification* _specification;

}

@property (nonatomic,copy) FBSSceneIdentity * identity;                          //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) FBSSceneClientIdentity * clientIdentity;              //@synthesize clientIdentity=_clientIdentity - In the implementation block
@property (nonatomic,copy) FBSSceneSpecification * specification;                //@synthesize specification=_specification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(id)succinctDescription;
-(void)setIdentity:(FBSSceneIdentity *)arg1 ;
-(FBSSceneClientIdentity *)clientIdentity;
-(FBSSceneIdentity *)identity;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(void)setClientIdentity:(FBSSceneClientIdentity *)arg1 ;
-(void)setSpecification:(FBSSceneSpecification *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

