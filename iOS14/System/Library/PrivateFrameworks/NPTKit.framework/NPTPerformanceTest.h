/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
*/

#import <NPTKit/NPTKit-Structs.h>
#import <NPTKit/NPTPingDelegate.h>
#import <NPTKit/NPTDownloadDelegate.h>
#import <NPTKit/NPTUploadDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_activity;
@class NPTDownload, NPTUpload, NPTPing, NSMutableDictionary, NSString, NSObject, NPTPerformanceTestConfiguration, NPTResults, NSDictionary;

@interface NPTPerformanceTest : NSObject <NPTPingDelegate, NPTDownloadDelegate, NPTUploadDelegate, NSSecureCoding, NSCopying> {

	NPTDownload* download;
	NPTUpload* upload;
	NPTPing* ping;
	NSMutableDictionary* restoredMetadata;
	NSString* uuid;
	NSObject*<OS_nw_activity> performanceTestActivity;
	NSMutableDictionary* snapshots;
	id _delegate;
	NPTPerformanceTestConfiguration* _configuration;
	NPTResults* _results;

}

@property (nonatomic,retain) NPTResults * results;                                         //@synthesize results=_results - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NPTPerformanceTestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)performanceTestWithConfiguration:(id)arg1 ;
+(id)performanceTestWithDefaultConfiguration;
-(void)setResults:(NPTResults *)arg1 ;
-(NPTResults *)results;
-(id)init;
-(void)save;
-(id)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(NPTPerformanceTestConfiguration *)configuration;
-(NSDictionary *)dictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConfiguration:(NPTPerformanceTestConfiguration *)arg1 ;
-(void)startDownloadWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelAllNetworking;
-(void)uploadWillStart;
-(void)upload:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)upload:(id)arg1 didReceiveSpeedMetric:(id)arg2 ;
-(void)upload:(id)arg1 didFinishWithResults:(id)arg2 ;
-(void)startUploadWithCompletion:(/*^block*/id)arg1 ;
-(void)startPingWithCompletion:(/*^block*/id)arg1 ;
-(id)getFlattenedDictionary;
-(id)timestampMasked;
-(id)convertDateToISO8601String:(id)arg1 ;
-(id)timestampMaskedString;
-(void)getCDNDebugInfoWithTimeoutDuration:(double)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)pingWillStartPinging;
-(void)pingDidFinishWithResults:(id)arg1 ;
-(void)pingDidFinishWithError:(id)arg1 ;
-(void)downloadWillStart;
-(void)download:(id)arg1 didReceiveSpeedMetric:(id)arg2 ;
-(void)download:(id)arg1 didFinishWithResults:(id)arg2 ;
-(void)download:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTestWithCompletion:(/*^block*/id)arg1 ;
@end

