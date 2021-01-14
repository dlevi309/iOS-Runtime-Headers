/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXBrowserVisibleContentSnapshot.h>

@class NSArray, NSDateInterval, NSString;

@interface PXBrowserVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot> {

	unsigned long long _dateIntervalGranularity;
	NSArray* _locationNames;

}

@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) NSArray * locationNames;                                 //@synthesize locationNames=_locationNames - In the implementation block
@property (nonatomic,readonly) unsigned long long dateIntervalGranularity;              //@synthesize dateIntervalGranularity=_dateIntervalGranularity - In the implementation block
@property (nonatomic,readonly) NSString * localizedPlaceholderText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snapshotWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3 ;
+(id)snapshotWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3 dateType:(unsigned long long)arg4 ;
-(NSDateInterval *)dateInterval;
-(id)init;
-(NSArray *)locationNames;
-(id)initWithDateIntervalGranularity:(unsigned long long)arg1 ;
-(unsigned long long)dateIntervalGranularity;
@end

