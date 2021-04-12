/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)startDate;
-(id)initWithSessionStartDate:(id)arg1 ;
-(BOOL)isCurrentSession;
@end

