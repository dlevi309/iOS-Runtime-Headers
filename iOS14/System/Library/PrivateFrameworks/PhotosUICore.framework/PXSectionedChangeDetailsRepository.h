/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface PXSectionedChangeDetailsRepository : NSObject {

	NSMutableArray* _allChangeDetails;
	NSObject*<OS_dispatch_queue> _internalQueue;
	long long _historyLimit;

}

@property (nonatomic,readonly) long long historyLimit;              //@synthesize historyLimit=_historyLimit - In the implementation block
-(id)changeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
-(id)init;
-(id)initWithChangeHistoryLimit:(long long)arg1 ;
-(long long)historyLimit;
-(void)addChangeDetails:(id)arg1 ;
-(id)coalescedChangeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
@end

