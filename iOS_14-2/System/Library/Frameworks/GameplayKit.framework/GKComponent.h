/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKEntity, GKComponentSystem, NSString;

@interface GKComponent : NSObject <NSCopying, NSSecureCoding> {

	GKEntity* _entity;
	int _usesPerComponentUpdateCount;
	GKComponentSystem* _componentSystem;
	NSString* _componentName;

}

@property (assign,nonatomic) BOOL usesPerComponentUpdate; 
@property (assign,nonatomic) GKComponentSystem * componentSystem; 
@property (assign,nonatomic) NSString * componentName; 
@property (nonatomic,__weak,readonly) GKEntity * entity; 
+(BOOL)supportsSecureCoding;
-(void)setEntity:(GKEntity *)arg1 ;
-(GKEntity *)entity;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)copy;
-(void)setComponentName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)componentName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GKComponentSystem *)componentSystem;
-(BOOL)usesPerComponentUpdate;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)didAddToEntity;
-(void)willRemoveFromEntity;
-(void)setUsesPerComponentUpdate:(BOOL)arg1 ;
-(void)setComponentSystem:(GKComponentSystem *)arg1 ;
@end

