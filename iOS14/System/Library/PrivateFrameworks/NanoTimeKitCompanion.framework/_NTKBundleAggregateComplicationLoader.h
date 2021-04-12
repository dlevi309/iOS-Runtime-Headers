/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKBundleComplicationDataSourceLoader.h>

@class NSOrderedSet;

@interface _NTKBundleAggregateComplicationLoader : NTKBundleComplicationDataSourceLoader {

	NSOrderedSet* _loaders;

}

@property (nonatomic,copy) NSOrderedSet * loaders;              //@synthesize loaders=_loaders - In the implementation block
-(NSOrderedSet *)loaders;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_loadClassesUsingBlock:(/*^block*/id)arg1 ;
-(void)setLoaders:(NSOrderedSet *)arg1 ;
@end

