/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/PFHistoryAnalyzerOptions.h>

@class CKRecordZone;

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {

	BOOL _includePrivateTransactions;
	CKRecordZone* _recordZone;

}

@property (nonatomic,retain) CKRecordZone * recordZone;                    //@synthesize recordZone=_recordZone - In the implementation block
@property (assign,nonatomic) BOOL includePrivateTransactions;              //@synthesize includePrivateTransactions=_includePrivateTransactions - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKRecordZone *)recordZone;
-(void)setRecordZone:(CKRecordZone *)arg1 ;
-(id)initWithRecordZone:(id)arg1 ;
-(BOOL)includePrivateTransactions;
-(void)setIncludePrivateTransactions:(BOOL)arg1 ;
@end

