/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString, FBSSceneParameters;

@interface FBSWorkspaceSceneRemnant : NSObject <BSXPCSecureCoding> {

	NSString* _identifier;
	NSString* _group;
	FBSSceneParameters* _parameters;

}

@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * group;                             //@synthesize group=_group - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(FBSSceneParameters *)parameters;
-(NSString *)group;
-(id)init;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 group:(id)arg2 parameters:(id)arg3 ;
-(NSString *)identifier;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

