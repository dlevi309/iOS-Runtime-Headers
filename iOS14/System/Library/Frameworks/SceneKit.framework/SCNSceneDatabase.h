/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)addInstance:(id)arg1 withName:(id)arg2 class:(Class)arg3 ;
@end

