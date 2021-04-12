/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSString, NSBundle;

@interface BSPluginBundle : NSObject {

	NSString* _identifier;
	NSBundle* _bundle;
	NSString* _name;
	NSString* _type;
	NSString* _specifiedClassName;
	NSString* _requiredClassOrProtocolName;
	Class _principalClass;

}

@property (nonatomic,readonly) NSBundle * bundle;                               //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy) NSString * specifiedClassName;                       //@synthesize specifiedClassName=_specifiedClassName - In the implementation block
@property (nonatomic,copy) NSString * requiredClassOrProtocolName;              //@synthesize requiredClassOrProtocolName=_requiredClassOrProtocolName - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) Class principalClass;                            //@synthesize principalClass=_principalClass - In the implementation block
+(id)bundleWithPath:(id)arg1 availableSpecifications:(id)arg2 ;
-(id)description;
-(NSString *)name;
-(NSString *)type;
-(BOOL)isValid;
-(NSString *)identifier;
-(BOOL)isLoaded;
-(Class)principalClass;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)requiredClassOrProtocolName;
-(void)setRequiredClassOrProtocolName:(NSString *)arg1 ;
-(BOOL)loadPlugin:(/*^block*/id)arg1 ;
-(BOOL)loadPlugin;
-(NSString *)specifiedClassName;
-(void)setSpecifiedClassName:(NSString *)arg1 ;
@end

