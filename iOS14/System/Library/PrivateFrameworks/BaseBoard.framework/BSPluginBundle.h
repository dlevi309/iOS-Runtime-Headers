/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSBundle, NSString;

@interface BSPluginBundle : NSObject <BSDescriptionProviding> {

	NSBundle* _bundle;
	NSString* _specifiedClassName;
	NSString* _requiredClassOrProtocolName;
	NSString* _identifier;
	NSString* _name;
	NSString* _type;
	Class _principalClass;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) Class principalClass;                     //@synthesize principalClass=_principalClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(BOOL)loadPlugin:(/*^block*/id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)name;
-(Class)principalClass;
-(NSString *)description;
-(BOOL)isValid;
-(NSString *)type;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)loadPlugin;
-(id)succinctDescriptionBuilder;
-(BOOL)isLoaded;
@end

