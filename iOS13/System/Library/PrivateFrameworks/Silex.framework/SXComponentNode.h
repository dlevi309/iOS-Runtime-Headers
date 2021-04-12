/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSString, NSMutableSet, NSSet;

@interface SXComponentNode : NSObject {

	NSString* _componentIdentifier;
	long long _attribute;
	NSMutableSet* _mutableDependencies;

}

@property (nonatomic,retain) NSMutableSet * mutableDependencies;              //@synthesize mutableDependencies=_mutableDependencies - In the implementation block
@property (nonatomic,readonly) NSString * componentIdentifier;                //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,readonly) long long attribute;                           //@synthesize attribute=_attribute - In the implementation block
@property (nonatomic,readonly) NSSet * dependencies; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)attribute;
-(NSSet *)dependencies;
-(NSString *)componentIdentifier;
-(id)initWithComponentIdentifier:(id)arg1 andAttribute:(long long)arg2 ;
-(void)addComponentDependency:(id)arg1 ;
-(BOOL)hasDependencyToComponentIdentifier:(id)arg1 attribute:(long long)arg2 ;
-(NSMutableSet *)mutableDependencies;
-(void)setMutableDependencies:(NSMutableSet *)arg1 ;
@end

