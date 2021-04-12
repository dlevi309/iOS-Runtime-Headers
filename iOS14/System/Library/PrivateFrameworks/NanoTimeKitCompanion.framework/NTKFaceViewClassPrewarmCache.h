/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSMutableDictionary;

@interface NTKFaceViewClassPrewarmCache : NSObject {

	NSMutableDictionary* _prewarmCache;

}
+(id)sharedInstance;
-(id)init;
-(id)prewarmDataForClass:(Class)arg1 ;
-(void)prewarmClasses:(id)arg1 ;
@end

