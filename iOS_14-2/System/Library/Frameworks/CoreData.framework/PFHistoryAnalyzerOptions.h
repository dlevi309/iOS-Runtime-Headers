/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PFHistoryAnalyzerOptions : NSObject <NSCopying> {

	BOOL _automaticallyPruneTransientRecords;
	unsigned long long _transactionLimit;

}

@property (assign,nonatomic) BOOL automaticallyPruneTransientRecords;              //@synthesize automaticallyPruneTransientRecords=_automaticallyPruneTransientRecords - In the implementation block
@property (assign,nonatomic) unsigned long long transactionLimit;                  //@synthesize transactionLimit=_transactionLimit - In the implementation block
-(BOOL)automaticallyPruneTransientRecords;
-(void)setAutomaticallyPruneTransientRecords:(BOOL)arg1 ;
-(unsigned long long)transactionLimit;
-(void)setTransactionLimit:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

