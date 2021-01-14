/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXBrowserVisibleContentSnapshot.h>

@class NSDateInterval, NSArray, NSString;

@interface PXCuratedLibraryVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot> {

	/*^block*/id _dateIntervalFuture;
	/*^block*/id _locationNamesFuture;
	unsigned long long _dataSourceIdentifier;
	BOOL _isFiltering;

}

@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) NSArray * locationNames; 
@property (nonatomic,readonly) unsigned long long dateIntervalGranularity; 
@property (nonatomic,readonly) NSString * localizedPlaceholderText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDateInterval *)dateInterval;
-(id)init;
-(NSArray *)locationNames;
-(NSString *)localizedPlaceholderText;
-(unsigned long long)dateIntervalGranularity;
-(id)initWithLibraryLayout:(id)arg1 dateType:(unsigned long long)arg2 ;
@end

