/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSOrderedSet, NSSet, NSString, BSSettings;

@interface FBSSceneClientSettings : NSObject <BSDebugDescriptionProviding, BSXPCSecureCoding, NSCopying, NSMutableCopying> {

	NSOrderedSet* _layers;
	double _preferredLevel;
	long long _preferredInterfaceOrientation;
	NSSet* _occlusions;
	NSString* _preferredSceneHostIdentifier;
	BSSettings* _otherSettings;

}

@property (nonatomic,copy,readonly) NSOrderedSet * layers;                                //@synthesize layers=_layers - In the implementation block
@property (nonatomic,readonly) double preferredLevel;                                     //@synthesize preferredLevel=_preferredLevel - In the implementation block
@property (nonatomic,readonly) long long preferredInterfaceOrientation;                   //@synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSSet * occlusions;                                   //@synthesize occlusions=_occlusions - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredSceneHostIdentifier;              //@synthesize preferredSceneHostIdentifier=_preferredSceneHostIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settings;
+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)_isMutable;
-(BOOL)isUISubclass;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(NSOrderedSet *)layers;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(NSString *)preferredSceneHostIdentifier;
-(id)otherSettings;
-(NSSet *)occlusions;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg1 debug:(BOOL)arg2 ;
-(double)preferredLevel;
-(long long)preferredInterfaceOrientation;
@end

