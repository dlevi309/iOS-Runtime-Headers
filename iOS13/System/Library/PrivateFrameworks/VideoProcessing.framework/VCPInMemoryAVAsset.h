/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <AVFoundation/AVURLAsset.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class NSData, NSString;

@interface VCPInMemoryAVAsset : AVURLAsset <AVAssetResourceLoaderDelegate> {

	NSData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
@end

