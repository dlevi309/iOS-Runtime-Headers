/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)identityForProcessIdentity:(id)arg1 ;
+(id)localIdentity;
+(id)identityForBundleID:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(NSString *)bundleIdentifier;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(RBSProcessIdentity *)processIdentity;
-(BOOL)isLocal;
@end

