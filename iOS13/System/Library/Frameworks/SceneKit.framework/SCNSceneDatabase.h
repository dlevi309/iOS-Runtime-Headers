/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface SCNSceneDatabase : NSObject <NSSecureCoding> {

	NSMutableDictionary* _db;

}
+(BOOL)supportsSecureCoding;
+(id)lookUpKeyForObjectNamed:(id)arg1 class:(Class)arg2 ;
+(id)sceneDatabase;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addInstance:(id)arg1 withName:(id)arg2 class:(Class)arg3 ;
@end

