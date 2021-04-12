/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKBundleComplicationDataSourceLoader.h>

@class NSArray;

@interface NTKBundleBundleComplicationLoader : NTKBundleComplicationDataSourceLoader {

	NSArray* _urls;

}

@property (nonatomic,retain) NSArray * urls;              //@synthesize urls=_urls - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(void)_enumerateBundles:(/*^block*/id)arg1 ;
-(void)_loadClassesUsingBlock:(/*^block*/id)arg1 ;
@end

