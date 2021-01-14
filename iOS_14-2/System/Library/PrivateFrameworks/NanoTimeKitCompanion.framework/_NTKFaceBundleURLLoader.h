/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceBundleLoader.h>

@class NSArray;

@interface _NTKFaceBundleURLLoader : NTKFaceBundleLoader {

	NSArray* _urls;

}

@property (nonatomic,retain) NSArray * urls;              //@synthesize urls=_urls - In the implementation block
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_loadClassesUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBundles:(/*^block*/id)arg1 ;
@end

