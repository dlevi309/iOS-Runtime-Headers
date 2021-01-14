/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXUserDefaultsDataSource.h>

@protocol OS_dispatch_queue;
@class NSDate, NSObject;

@interface PXUserDefaultsStandardDataSource : NSObject <PXUserDefaultsDataSource> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSDate * currentDate; 
-(NSDate *)currentDate;
-(id)init;
-(void)setPersistedValue:(id)arg1 forKey:(id)arg2 ;
-(id)persistedValueForKey:(id)arg1 ;
@end

