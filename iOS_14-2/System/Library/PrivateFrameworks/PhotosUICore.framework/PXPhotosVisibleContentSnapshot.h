/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXBrowserVisibleContentSnapshot.h>

@class NSDateInterval, NSArray, NSString;

@interface PXPhotosVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot> {

	/*^block*/id _dateIntervalFuture;
	/*^block*/id _locationNamesFuture;
	unsigned long long _dataSourceIdentifier;
	BOOL _isFiltering;
	unsigned long long _dateIntervalGranularity;

}

@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) NSArray * locationNames; 
@property (nonatomic,readonly) unsigned long long dateIntervalGranularity;              //@synthesize dateIntervalGranularity=_dateIntervalGranularity - In the implementation block
@property (nonatomic,readonly) NSString * localizedPlaceholderText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDateInterval *)dateInterval;
-(id)init;
-(NSArray *)locationNames;
-(NSString *)localizedPlaceholderText;
-(id)initWithPhotosLayout:(id)arg1 dateType:(unsigned long long)arg2 dateIntervalGranularity:(unsigned long long)arg3 ;
-(unsigned long long)dateIntervalGranularity;
@end

