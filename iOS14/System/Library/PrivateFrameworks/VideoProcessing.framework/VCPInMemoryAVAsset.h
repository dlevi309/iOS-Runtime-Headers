/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <AVFCore/AVURLAsset.h>
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

