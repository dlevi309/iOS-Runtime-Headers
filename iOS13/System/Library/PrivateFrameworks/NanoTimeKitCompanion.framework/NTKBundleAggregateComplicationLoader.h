/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKBundleComplicationDataSourceLoader.h>

@class NSOrderedSet;

@interface NTKBundleAggregateComplicationLoader : NTKBundleComplicationDataSourceLoader {

	NSOrderedSet* _loaders;

}

@property (nonatomic,copy) NSOrderedSet * loaders;              //@synthesize loaders=_loaders - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_loadClassesUsingBlock:(/*^block*/id)arg1 ;
-(void)setLoaders:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)loaders;
@end

