/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/PFHistoryAnalyzerOptions.h>

@class CKRecordZone, CKSchedulerActivity;

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {

	BOOL _includePrivateTransactions;
	CKRecordZone* _recordZone;
	CKSchedulerActivity* _activity;

}

@property (nonatomic,retain) CKRecordZone * recordZone;                    //@synthesize recordZone=_recordZone - In the implementation block
@property (assign,nonatomic) BOOL includePrivateTransactions;              //@synthesize includePrivateTransactions=_includePrivateTransactions - In the implementation block
@property (nonatomic,retain) CKSchedulerActivity * activity;               //@synthesize activity=_activity - In the implementation block
-(id)initWithRecordZone:(id)arg1 ;
-(BOOL)includePrivateTransactions;
-(void)setIncludePrivateTransactions:(BOOL)arg1 ;
-(CKSchedulerActivity *)activity;
-(CKRecordZone *)recordZone;
-(void)setActivity:(CKSchedulerActivity *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setRecordZone:(CKRecordZone *)arg1 ;
@end

