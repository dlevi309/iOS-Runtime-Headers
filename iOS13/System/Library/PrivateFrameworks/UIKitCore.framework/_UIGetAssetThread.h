/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <Foundation/NSThread.h>

@class NSURL, ALAssetsLibrary, NSCondition, ALAsset;

@interface _UIGetAssetThread : NSThread {

	NSURL* _url;
	ALAssetsLibrary* _library;
	NSCondition* _condition;
	ALAsset* _asset;

}

@property (retain) NSCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (retain) ALAsset * asset;                      //@synthesize asset=_asset - In the implementation block
-(void)main;
-(NSCondition *)condition;
-(ALAsset *)asset;
-(void)setAsset:(ALAsset *)arg1 ;
-(id)initWithURL:(id)arg1 assetsLibrary:(id)arg2 ;
-(void)setCondition:(NSCondition *)arg1 ;
@end

