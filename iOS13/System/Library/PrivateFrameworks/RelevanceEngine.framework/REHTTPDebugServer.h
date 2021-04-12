/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REHTTPServerDelegate.h>

@protocol REHTTPDebugServerDataSource;
@class REHTTPServer, REHTMLPageBuilder, REHTTPFileCache, NSArray, NSString;

@interface REHTTPDebugServer : NSObject <REHTTPServerDelegate> {

	REHTTPServer* _server;
	REHTMLPageBuilder* _pageBuilder;
	REHTTPFileCache* _cache;
	SCD_Struct_RE18 _dataSourceCallbacks;
	id<REHTTPDebugServerDataSource> _dataSource;
	NSArray* _availableEngines;
	NSString* _processName;

}

@property (retain) NSArray * availableEngines;                                                 //@synthesize availableEngines=_availableEngines - In the implementation block
@property (retain) NSString * processName;                                                     //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) unsigned short port; 
@property (nonatomic,__weak,readonly) id<REHTTPDebugServerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(unsigned short)port;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(id<REHTTPDebugServerDataSource>)dataSource;
-(id)_pageTitle;
-(id)_pageMap;
-(id)_landingPage;
-(NSArray *)availableEngines;
-(id)_createContentItemWithTitle:(id)arg1 content:(id)arg2 ;
-(void)setAvailableEngines:(NSArray *)arg1 ;
-(void)_loadAvailableEngines:(id)arg1 ;
-(id)_create404Element;
-(SEL)_serverMethod:(id)arg1 ;
-(BOOL)_isReservedFilePath:(id)arg1 ;
-(void)_loadPageForReservedPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleFileRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_aboutPage;
-(id)_enginesPage;
-(void)_loadEngineListWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_engineList;
-(id)_landPageFileName;
-(id)_radarLinkWithTitle:(id)arg1 ;
-(void)_availableEngineInstancesForProcess:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)httpServer:(id)arg1 handleRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPort:(unsigned short)arg1 dataSource:(id)arg2 ;
@end

