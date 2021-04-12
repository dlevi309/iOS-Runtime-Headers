/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAVPlayerItemFactory.h>

@protocol SXAVPlayerItemFactory <NSObject>
@required
-(id)createPlayerItemWithURL:(id)arg1;

@end


@protocol SXAVURLAssetFactory;
@class NSArray, NSString;

@interface SXAVPlayerItemFactory : NSObject <SXAVPlayerItemFactory> {

	NSArray* _automaticallyLoadedAssetKeys;
	id<SXAVURLAssetFactory> _assetFactory;

}

@property (nonatomic,copy,readonly) NSArray * automaticallyLoadedAssetKeys;              //@synthesize automaticallyLoadedAssetKeys=_automaticallyLoadedAssetKeys - In the implementation block
@property (nonatomic,readonly) id<SXAVURLAssetFactory> assetFactory;                     //@synthesize assetFactory=_assetFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)automaticallyLoadedAssetKeys;
-(id)createPlayerItemWithURL:(id)arg1 ;
-(id<SXAVURLAssetFactory>)assetFactory;
-(id)initWithAutomaticallyLoadedAssetKeys:(id)arg1 assetFactory:(id)arg2 ;
@end

