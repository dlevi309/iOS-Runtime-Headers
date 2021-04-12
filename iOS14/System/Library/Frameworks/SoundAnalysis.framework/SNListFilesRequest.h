/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNTaskCreating.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNFileServerInfo, NSString;

@interface SNListFilesRequest : NSObject <SNTaskCreating, SNRequest> {

	SNFileServerInfo* _serverInfo;
	NSString* _queryPath;

}

@property (nonatomic,retain) SNFileServerInfo * serverInfo;              //@synthesize serverInfo=_serverInfo - In the implementation block
@property (nonatomic,retain) NSString * queryPath;                       //@synthesize queryPath=_queryPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SNFileServerInfo *)serverInfo;
-(void)setServerInfo:(SNFileServerInfo *)arg1 ;
-(/*^block*/id)launchTaskWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)setQueryPath:(NSString *)arg1 ;
-(NSString *)queryPath;
-(id)initWithServerInfo:(id)arg1 queryPath:(id)arg2 ;
@end

