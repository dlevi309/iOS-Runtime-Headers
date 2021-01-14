/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@class NSMutableArray;

@interface _SCNUIKitSourceRegistry : NSObject {

	NSMutableArray* _sources;

}
+(id)sharedInstance;
+(void)registerUIKitSource:(id)arg1 ;
+(void)unregisterUIKitSource:(id)arg1 ;
-(void)remove:(id)arg1 ;
-(void)apply:(/*^block*/id)arg1 ;
-(id)init;
-(void)add:(id)arg1 ;
-(void)dealloc;
@end

