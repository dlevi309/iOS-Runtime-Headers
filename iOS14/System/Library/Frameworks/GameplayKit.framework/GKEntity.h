/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSArray;

@interface GKEntity : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _components;

}

@property (nonatomic,retain,readonly) NSArray * components; 
+(BOOL)supportsSecureCoding;
+(id)entity;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addComponent:(id)arg1 ;
-(NSArray *)components;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)componentForKey:(id)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(void)dealloc;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)removeComponentForClass:(Class)arg1 ;
-(id)componentForClass:(Class)arg1 ;
@end

