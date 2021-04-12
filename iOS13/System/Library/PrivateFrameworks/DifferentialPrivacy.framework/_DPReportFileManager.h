/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(_DPDaemonConnection *)connection;
-(id)initWithDirectoryPath:(id)arg1 ;
-(NSString *)reportsDirectoryPath;
-(id)reportsNotYetSubmitted;
-(void)retireReports:(id)arg1 ;
-(void)setReportsDirectoryPath:(NSString *)arg1 ;
@end

