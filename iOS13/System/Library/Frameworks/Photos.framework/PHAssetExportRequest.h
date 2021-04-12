/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol PHAssetExportRequestDelegate;
@class NSProgress, NSURL, PHAsset, NSDictionary, NSString;

@interface PHAssetExportRequest : NSObject <NSProgressReporting> {

	NSURL* _outputDirectory;
	PHAsset* _asset;
	NSProgress* _progress;
	unsigned long long _state;
	id<PHAssetExportRequestDelegate> _delegate;
	NSDictionary* _variants;

}

@property (nonatomic,readonly) PHAsset * asset;                                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                       //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PHAssetExportRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * variants;                                     //@synthesize variants=_variants - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
+(id)exportRequestForAsset:(id)arg1 variants:(id)arg2 error:(id*)arg3 ;
+(id)assetExportLog;
-(id)init;
-(NSString *)description;
-(id<PHAssetExportRequestDelegate>)delegate;
-(void)setDelegate:(id<PHAssetExportRequestDelegate>)arg1 ;
-(NSProgress *)progress;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(PHAsset *)asset;
-(id)initWithAsset:(id)arg1 variants:(id)arg2 ;
-(id)outputDirectory;
-(void)performCompletionWithFileURLs:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long*)arg2 isProcessingRequired:(BOOL*)arg3 fileURLs:(id*)arg4 info:(id*)arg5 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)variants;
@end

