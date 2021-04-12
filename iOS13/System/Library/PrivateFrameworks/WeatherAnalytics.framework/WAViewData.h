/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString, WAViewType, WAViewAction;

@interface WAViewData : NSObject <AADataEventType> {

	NSString* _viewSessionID;
	WAViewType* _viewType;
	WAViewAction* _viewAction;

}

@property (nonatomic,readonly) NSString * viewSessionID;               //@synthesize viewSessionID=_viewSessionID - In the implementation block
@property (nonatomic,readonly) WAViewType * viewType;                  //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) WAViewAction * viewAction;              //@synthesize viewAction=_viewAction - In the implementation block
+(id)dataName;
-(WAViewType *)viewType;
-(id)toDict;
-(id)initWithViewSessionID:(id)arg1 viewType:(id)arg2 viewAction:(id)arg3 ;
-(WAViewAction *)viewAction;
-(NSString *)viewSessionID;
@end

