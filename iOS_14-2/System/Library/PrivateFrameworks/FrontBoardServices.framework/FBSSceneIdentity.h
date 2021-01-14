/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface FBSSceneIdentity : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {

	NSString* _identifier;
	NSString* _workspaceIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * workspaceIdentifier;              //@synthesize workspaceIdentifier=_workspaceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identity;
+(id)identityForIdentifier:(id)arg1 ;
+(id)identityForIdentifier:(id)arg1 workspaceIdentifier:(id)arg2 ;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)workspaceIdentifier;
-(void)setWorkspaceIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

