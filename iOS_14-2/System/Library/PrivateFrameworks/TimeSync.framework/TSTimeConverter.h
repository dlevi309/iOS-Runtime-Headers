/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@class NSArray;

@interface TSTimeConverter : NSObject {

	NSArray* _taiutc;

}
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)init;
-(id)taiDateFromUTCDate:(id)arg1 ;
-(id)utcDateFromTAIDate:(id)arg1 ;
-(id)initWithTAIUTCArray:(id)arg1 ;
-(double)leapSecondForUTCDate:(id)arg1 ;
-(double)leapSecondForTAIDate:(id)arg1 ;
@end

