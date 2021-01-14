/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_os_transaction;
@class _CDEventIndexerBookmark, NSDate, NSObject;

@interface _CDEventIndexerContext : NSObject {

	_CDEventIndexerBookmark* _bookmark;
	long long _currentVersion;
	unsigned long long _batchSize;
	/*^block*/id _completion;
	NSDate* _indexDate;
	NSObject*<OS_os_transaction> _transaction;

}
-(id)init;
-(id)description;
@end

