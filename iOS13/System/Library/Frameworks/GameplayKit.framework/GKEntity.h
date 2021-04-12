/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)components;
-(void)addComponent:(id)arg1 ;
-(id)componentForKey:(id)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)removeComponentForClass:(Class)arg1 ;
-(id)componentForClass:(Class)arg1 ;
@end

