/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/ICDeviceBrowserDelegate.h>

@class ICDeviceBrowser, NSMutableDictionary, NSHashTable, NSString;

@interface PHImportController : NSObject <ICDeviceBrowserDelegate> {

	os_unfair_lock_s _sourceListLock;
	os_unfair_lock_s _importInProgressLock;
	BOOL _importInProgress;
	ICDeviceBrowser* _deviceBrowser;
	NSMutableDictionary* _importDeviceSources;
	NSHashTable* _observers;
	id _processInfoActivityToken;

}

@property (nonatomic,retain) ICDeviceBrowser * deviceBrowser;                        //@synthesize deviceBrowser=_deviceBrowser - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * importDeviceSources;              //@synthesize importDeviceSources=_importDeviceSources - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL importInProgress;                                  //@synthesize importInProgress=_importInProgress - In the implementation block
@property (nonatomic,retain) id processInfoActivityToken;                            //@synthesize processInfoActivityToken=_processInfoActivityToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)importSourceForUrls:(id)arg1 ;
-(NSHashTable *)observers;
-(void)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibraryAtURL:(id)arg3 withOptions:(id)arg4 progress:(id*)arg5 delegate:(id)arg6 performanceDelegate:(id)arg7 atEnd:(/*^block*/id)arg8 ;
-(id)init;
-(void)importEnding;
-(void)accessSourceList:(/*^block*/id)arg1 ;
-(id)importUrls:(id)arg1 intoLibrary:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4 performanceDelegate:(id)arg5 atEnd:(/*^block*/id)arg6 ;
-(void)setImportInProgress:(BOOL)arg1 ;
-(void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(BOOL)arg3 ;
-(NSMutableDictionary *)importDeviceSources;
-(void)setImportDeviceSources:(NSMutableDictionary *)arg1 ;
-(BOOL)importInProgress;
-(void)setProcessInfoActivityToken:(id)arg1 ;
-(ICDeviceBrowser *)deviceBrowser;
-(void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)setDeviceBrowser:(ICDeviceBrowser *)arg1 ;
-(id)importUrls:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3 atEnd:(/*^block*/id)arg4 ;
-(id)filterDuplicates:(id)arg1 onSource:(id)arg2 library:(id)arg3 options:(id)arg4 delegate:(id)arg5 ;
-(id)processInfoActivityToken;
-(void)importStarting;
-(BOOL)sourceIsConnected:(id)arg1 ;
-(void)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 progress:(id*)arg5 delegate:(id)arg6 performanceDelegate:(id)arg7 atEnd:(/*^block*/id)arg8 ;
-(void)addImportControllerObserver:(id)arg1 ;
-(void)importAssets:(id)arg1 fromImportSource:(id)arg2 withOptions:(id)arg3 progress:(id*)arg4 delegate:(id)arg5 atEnd:(/*^block*/id)arg6 ;
@end

