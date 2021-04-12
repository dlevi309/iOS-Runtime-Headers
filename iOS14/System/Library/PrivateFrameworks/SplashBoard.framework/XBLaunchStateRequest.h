/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSDisplayConfiguration, NSString, XBDisplayEdgeInsetsWrapper;

@interface XBLaunchStateRequest : NSObject <BSXPCCoding, NSCopying, BSDescriptionProviding> {

	FBSDisplayConfiguration* _displayConfiguration;
	NSString* _groupID;
	long long _interfaceOrientation;
	long long _userInterfaceStyle;
	XBDisplayEdgeInsetsWrapper* _customSafeAreaInsets;
	unsigned long long _statusBarState;
	NSString* _urlSchemeName;
	NSString* _launchInterfaceIdentifier;
	CGSize _referenceSize;
	CGSize _naturalSize;

}

@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration;                 //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                               //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) CGSize referenceSize;                                           //@synthesize referenceSize=_referenceSize - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                                             //@synthesize naturalSize=_naturalSize - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                                 //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                                   //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (nonatomic,retain) XBDisplayEdgeInsetsWrapper * customSafeAreaInsets;              //@synthesize customSafeAreaInsets=_customSafeAreaInsets - In the implementation block
@property (assign,nonatomic) unsigned long long statusBarState;                              //@synthesize statusBarState=_statusBarState - In the implementation block
@property (nonatomic,copy) NSString * urlSchemeName;                                         //@synthesize urlSchemeName=_urlSchemeName - In the implementation block
@property (nonatomic,copy) NSString * launchInterfaceIdentifier;                             //@synthesize launchInterfaceIdentifier=_launchInterfaceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(long long)userInterfaceStyle;
-(unsigned long long)statusBarState;
-(void)setReferenceSize:(CGSize)arg1 ;
-(CGSize)naturalSize;
-(XBDisplayEdgeInsetsWrapper *)customSafeAreaInsets;
-(void)setCustomSafeAreaInsets:(XBDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setStatusBarState:(unsigned long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)groupID;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setLaunchInterfaceIdentifier:(NSString *)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(NSString *)urlSchemeName;
-(NSString *)launchInterfaceIdentifier;
-(CGSize)referenceSize;
-(void)setUrlSchemeName:(NSString *)arg1 ;
-(NSString *)description;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(long long)interfaceOrientation;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

