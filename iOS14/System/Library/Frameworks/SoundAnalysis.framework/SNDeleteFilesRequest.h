/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNTaskCreating.h>
#import <libobjc.A.dylib/SNRequest.h>

@class NSArray, NSString, SNFileServerInfo;

@interface SNDeleteFilesRequest : NSObject <SNTaskCreating, SNRequest> {

	NSArray* _files;
	NSString* _serverBasePath;
	SNFileServerInfo* _serverInfo;

}

@property (nonatomic,retain) NSArray * files;                            //@synthesize files=_files - In the implementation block
@property (nonatomic,retain) NSString * serverBasePath;                  //@synthesize serverBasePath=_serverBasePath - In the implementation block
@property (nonatomic,retain) SNFileServerInfo * serverInfo;              //@synthesize serverInfo=_serverInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SNFileServerInfo *)serverInfo;
-(NSArray *)files;
-(void)setServerInfo:(SNFileServerInfo *)arg1 ;
-(void)setFiles:(NSArray *)arg1 ;
-(/*^block*/id)launchTaskWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)setServerBasePath:(NSString *)arg1 ;
-(NSString *)serverBasePath;
-(id)initWithFiles:(id)arg1 serverBasePath:(id)arg2 serverInfo:(id)arg3 ;
@end

