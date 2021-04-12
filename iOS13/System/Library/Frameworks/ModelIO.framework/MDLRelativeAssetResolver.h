/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <libobjc.A.dylib/MDLAssetResolver.h>

@class MDLAsset, NSString;

@interface MDLRelativeAssetResolver : NSObject <MDLAssetResolver> {

	MDLAsset* _asset;

}

@property (assign,nonatomic,__weak) MDLAsset * asset;               //@synthesize asset=_asset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MDLAsset *)asset;
-(void)setAsset:(MDLAsset *)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(id)resolveAssetNamed:(id)arg1 ;
-(BOOL)canResolveAssetNamed:(id)arg1 ;
@end

