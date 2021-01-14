/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKVideoPlayerDataSource.h>

@class NSArray;

@interface NTKVideoPlayerArrayDataSource : NTKVideoPlayerDataSource {

	long long _currentListingIndex;
	NSArray* _listings;
	unsigned long long _order;

}

@property (assign,nonatomic) unsigned long long order;              //@synthesize order=_order - In the implementation block
+(id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 andListings:(id)arg3 ;
+(id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(unsigned long long)arg3 andListings:(id)arg4 ;
+(id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(unsigned long long)arg3 endBehavior:(unsigned long long)arg4 andFilenames:(id)arg5 ;
+(id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 andFilenames:(id)arg3 ;
+(id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(unsigned long long)arg3 andFilenames:(id)arg4 ;
+(id)dataSourceForDevice:(id)arg1 withFilenames:(id)arg2 ;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
-(id)currentListing;
-(void)advanceToNextListing:(unsigned long long)arg1 ;
-(id)initForDevice:(id)arg1 withListings:(id)arg2 ;
@end

