/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProcessName:(NSString *)arg1 ;
-(unsigned short)port;
-(NSString *)processName;
-(id<REHTTPDebugServerDataSource>)dataSource;
-(id)_pageTitle;
-(id)_landingPage;
-(id)_pageMap;
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

