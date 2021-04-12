/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSDate;


@protocol PXUserDefaultsDataSource
@property (nonatomic,readonly) NSDate * currentDate; 
@required
-(NSDate *)currentDate;
-(void)setPersistedValue:(id)arg1 forKey:(id)arg2;
-(id)persistedValueForKey:(id)arg1;

@end

