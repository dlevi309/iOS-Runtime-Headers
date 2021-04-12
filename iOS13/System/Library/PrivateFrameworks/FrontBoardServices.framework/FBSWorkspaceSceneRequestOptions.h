/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString, FBSSceneClientSettings;

@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding> {

	NSString* _identifier;
	FBSSceneClientSettings* _initialClientSettings;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) FBSSceneClientSettings * initialClientSettings;              //@synthesize initialClientSettings=_initialClientSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(FBSSceneClientSettings *)initialClientSettings;
-(void)setInitialClientSettings:(FBSSceneClientSettings *)arg1 ;
@end

