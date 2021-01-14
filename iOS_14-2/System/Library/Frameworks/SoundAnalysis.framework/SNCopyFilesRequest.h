/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNTaskCreating.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNFileServerInfo, NSArray, NSString;

@interface SNCopyFilesRequest : NSObject <SNTaskCreating, SNRequest> {

	SNFileServerInfo* _serverInfo;
	NSArray* _serverFilePaths;
	NSString* _serverBasePath;
	NSString* _localDestinationPath;

}

@property (nonatomic,retain) SNFileServerInfo * serverInfo;                //@synthesize serverInfo=_serverInfo - In the implementation block
@property (nonatomic,retain) NSArray * serverFilePaths;                    //@synthesize serverFilePaths=_serverFilePaths - In the implementation block
@property (nonatomic,retain) NSString * serverBasePath;                    //@synthesize serverBasePath=_serverBasePath - In the implementation block
@property (nonatomic,retain) NSString * localDestinationPath;              //@synthesize localDestinationPath=_localDestinationPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SNFileServerInfo *)serverInfo;
-(void)setServerInfo:(SNFileServerInfo *)arg1 ;
-(/*^block*/id)launchTaskWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)setServerBasePath:(NSString *)arg1 ;
-(NSString *)serverBasePath;
-(void)setServerFilePaths:(NSArray *)arg1 ;
-(void)setLocalDestinationPath:(NSString *)arg1 ;
-(NSArray *)serverFilePaths;
-(NSString *)localDestinationPath;
-(id)initWithServerInfo:(id)arg1 serverBasePath:(id)arg2 serverFilePaths:(id)arg3 localDestinationPath:(id)arg4 ;
@end

