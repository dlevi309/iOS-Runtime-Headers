/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBApplication;

@interface SBActivityAttribution : NSObject <NSCopying, BSDescriptionProviding> {

	NSString* _executablePath;
	BOOL _isSystemExecutable;
	NSString* _bundleIdentifier;
	NSString* _displayName;
	NSString* _attributionGroup;
	SCD_Struct_SB38 _auditToken;

}

@property (nonatomic,readonly) SCD_Struct_SB38 auditToken;                    //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) SBApplication * application; 
@property (nonatomic,copy,readonly) NSString * attributionGroup;              //@synthesize attributionGroup=_attributionGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(SCD_Struct_SB38)auditToken;
-(void)_prepareDisplayName;
-(NSString *)description;
-(unsigned long long)hash;
-(SBApplication *)application;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(id)initWithSTActivityAttribution:(id)arg1 ;
-(NSString *)attributionGroup;
-(BOOL)isEqual:(id)arg1 ;
@end

