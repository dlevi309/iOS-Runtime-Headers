/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@class NSArray;

@interface TSTimeConverter : NSObject {

	NSArray* _taiutc;

}
-(id)init;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)taiDateFromUTCDate:(id)arg1 ;
-(id)utcDateFromTAIDate:(id)arg1 ;
-(id)initWithTAIUTCArray:(id)arg1 ;
-(double)leapSecondForUTCDate:(id)arg1 ;
-(double)leapSecondForTAIDate:(id)arg1 ;
@end

