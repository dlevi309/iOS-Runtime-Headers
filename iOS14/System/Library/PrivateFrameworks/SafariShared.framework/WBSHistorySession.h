/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSDate;

@interface WBSHistorySession : NSObject {

	NSDate* _startDate;

}

@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentSession; 
+(id)currentSession;
-(id)init;
-(NSDate *)startDate;
-(unsigned long long)hash;
-(BOOL)isCurrentSession;
-(id)initWithSessionStartDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

