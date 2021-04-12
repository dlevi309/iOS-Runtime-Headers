/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSString, _DPDaemonConnection;

@interface _DPReportFileManager : NSObject {

	NSString* _reportsDirectoryPath;
	_DPDaemonConnection* _connection;

}

@property (nonatomic,copy) NSString * reportsDirectoryPath;                   //@synthesize reportsDirectoryPath=_reportsDirectoryPath - In the implementation block
@property (nonatomic,readonly) _DPDaemonConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)submittedReports;
+(id)submittedReportsInDirectory:(id)arg1 ;
-(id)init;
-(_DPDaemonConnection *)connection;
-(id)initWithDirectoryPath:(id)arg1 ;
-(void)dealloc;
-(NSString *)reportsDirectoryPath;
-(id)reportsNotYetSubmitted;
-(void)retireReports:(id)arg1 ;
-(void)setReportsDirectoryPath:(NSString *)arg1 ;
@end

