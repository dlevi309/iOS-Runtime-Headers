/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class RBSProcessIdentity, NSString;

@interface FBSSceneClientIdentity : NSObject <NSCopying, BSDescriptionProviding> {

	BOOL _local;
	RBSProcessIdentity* _processIdentity;

}

@property (getter=isLocal,nonatomic,readonly) BOOL local;                              //@synthesize local=_local - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * processIdentity;              //@synthesize processIdentity=_processIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identityForBundleID:(id)arg1 ;
+(id)localIdentity;
+(id)identityForProcessIdentity:(id)arg1 ;
-(BOOL)isLocal;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(RBSProcessIdentity *)processIdentity;
-(NSString *)description;
-(unsigned long long)hash;
-(id)_init;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

