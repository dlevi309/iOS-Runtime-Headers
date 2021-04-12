/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlayerItemFactory.h>

@protocol SVPlayerItemFactory <NSObject>
@required
-(id)createPlayerItemWithAsset:(id)arg1;

@end


@class NSArray, NSString;

@interface SVPlayerItemFactory : NSObject <SVPlayerItemFactory> {

	NSArray* _automaticallyLoadedAssetKeys;

}

@property (nonatomic,copy,readonly) NSArray * automaticallyLoadedAssetKeys;              //@synthesize automaticallyLoadedAssetKeys=_automaticallyLoadedAssetKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)automaticallyLoadedAssetKeys;
-(id)createPlayerItemWithAsset:(id)arg1 ;
-(id)initWithAutomaticallyLoadedAssetKeys:(id)arg1 ;
@end

