/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXContextualMemoriesSetting.h>

@class NSDate, NSDateFormatter, NSString;

@interface PXContextualMemoriesTimeSetting : NSObject <PXContextualMemoriesSetting> {

	NSDate* _date;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * headerTitle; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)headerTitle;
-(id)init;
-(void)resetToDefault;
-(NSDateFormatter *)dateFormatter;
-(void)setDate:(NSDate *)arg1 ;
-(id)_forceMiddayDateForDate:(id)arg1 ;
-(NSDate *)date;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSString *)title;
@end

