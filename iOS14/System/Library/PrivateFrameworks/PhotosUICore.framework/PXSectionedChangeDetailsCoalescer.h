/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXMutableArrayChangeDetails, NSMutableArray, PXSectionedDataSourceChangeDetails;

@interface PXSectionedChangeDetailsCoalescer : NSObject {

	unsigned long long _fromDataSourceIdentifier;
	unsigned long long _currentToDataSourceIdentifier;
	PXMutableArrayChangeDetails* _sectionChangeDetails;
	NSMutableArray* _itemChangeEntries;
	PXSectionedDataSourceChangeDetails* _cachedResult;

}

@property (nonatomic,readonly) PXSectionedDataSourceChangeDetails * coalescedChangeDetails; 
+(BOOL)_verboseLoggingEnabled;
+(id)changeDetailsByCoalescingChangeDetails:(id)arg1 ;
-(id)initWithSectionedChangeDetails:(id)arg1 ;
-(PXSectionedDataSourceChangeDetails *)coalescedChangeDetails;
-(id)init;
-(void)addChangeDetails:(id)arg1 ;
@end

