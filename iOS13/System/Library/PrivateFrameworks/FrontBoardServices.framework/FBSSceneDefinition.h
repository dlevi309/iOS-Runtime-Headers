/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(FBSSceneIdentity *)identity;
-(void)setIdentity:(FBSSceneIdentity *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(void)setClientIdentity:(FBSSceneClientIdentity *)arg1 ;
-(void)setSpecification:(FBSSceneSpecification *)arg1 ;
-(FBSSceneClientIdentity *)clientIdentity;
@end

