/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/

#import <DuetActivityScheduler/_DASWidgetInfo.h>

@class NSDate, NSString;

@interface _DASWidgetRefresh : _DASWidgetInfo {

	BOOL _isDASInitiated;
	NSDate* _refreshDate;
	NSString* _refreshReason;

}

@property (nonatomic,retain) NSDate * refreshDate;                  //@synthesize refreshDate=_refreshDate - In the implementation block
@property (assign,nonatomic) BOOL isDASInitiated;                   //@synthesize isDASInitiated=_isDASInitiated - In the implementation block
@property (nonatomic,retain) NSString * refreshReason;              //@synthesize refreshReason=_refreshReason - In the implementation block
+(id)refreshAt:(id)arg1 forWidgetID:(id)arg2 ;
-(NSDate *)refreshDate;
-(BOOL)isDASInitiated;
-(void)setIsDASInitiated:(BOOL)arg1 ;
-(NSString *)refreshReason;
-(void)setRefreshReason:(NSString *)arg1 ;
-(void)setRefreshDate:(NSDate *)arg1 ;
@end

