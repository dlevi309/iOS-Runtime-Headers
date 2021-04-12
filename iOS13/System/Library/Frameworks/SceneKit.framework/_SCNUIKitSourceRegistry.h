/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@class NSMutableArray;

@interface _SCNUIKitSourceRegistry : NSObject {

	NSMutableArray* _sources;

}
+(id)sharedInstance;
+(void)registerUIKitSource:(id)arg1 ;
+(void)unregisterUIKitSource:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)remove:(id)arg1 ;
-(void)apply:(/*^block*/id)arg1 ;
-(void)add:(id)arg1 ;
@end

