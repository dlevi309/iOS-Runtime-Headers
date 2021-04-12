/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
*/

#import <libobjc.A.dylib/CAMLParserDelegate.h>

@protocol OS_dispatch_queue, WAAssetLoaderDelegate;
@class NSObject, NSCache, NSTimer, NSString;

@interface WUIAsynchronousAssetLoader : NSObject <CAMLParserDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _caml_parsing_queue;
	id<WAAssetLoaderDelegate> _delegate;
	NSCache* _resourceCache;
	NSCache* _dataCache;
	NSCache* _caDataCache;
	NSTimer* _opportunityTimer;

}

@property (nonatomic,retain) NSCache * resourceCache;                                //@synthesize resourceCache=_resourceCache - In the implementation block
@property (nonatomic,retain) NSCache * dataCache;                                    //@synthesize dataCache=_dataCache - In the implementation block
@property (nonatomic,retain) NSCache * caDataCache;                                  //@synthesize caDataCache=_caDataCache - In the implementation block
@property (nonatomic,retain) NSTimer * opportunityTimer;                             //@synthesize opportunityTimer=_opportunityTimer - In the implementation block
@property (assign,nonatomic,__weak) id<WAAssetLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAssetLoader;
-(void)cancelLoading;
-(void)setDataCache:(NSCache *)arg1 ;
-(void)didReceivedMemoryWarning;
-(id)caml_parsing_queue;
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2 ;
-(void)_primeOpportunisticLoad;
-(id)init;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3 ;
-(id<WAAssetLoaderDelegate>)delegate;
-(void)setCaDataCache:(NSCache *)arg1 ;
-(void)CAMLParser:(id)arg1 formatWarningString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4 ;
-(void)setDelegate:(id<WAAssetLoaderDelegate>)arg1 ;
-(void)CAMLParser:(id)arg1 formatErrorString:(const char*)arg2 arguments:(char*)arg3 lineNumber:(unsigned long long)arg4 ;
-(NSCache *)resourceCache;
-(void)setResource:(id)arg1 forKey:(id)arg2 ;
-(void)loadRootLayerForFile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSTimer *)opportunityTimer;
-(void)_asynchronouslyPreheatCADataForCity:(id)arg1 ;
-(void)setResourceCache:(NSCache *)arg1 ;
-(id)queue;
-(void)beginLoading;
-(void)setOpportunityTimer:(NSTimer *)arg1 ;
-(id)filenameForCondition:(long long)arg1 isDay:(BOOL)arg2 ;
-(void)_opportunisticallyLoad;
-(NSCache *)caDataCache;
-(NSCache *)dataCache;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(void)dealloc;
@end

