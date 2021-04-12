/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKStandingQuery.h>

@protocol OS_xpc_object;
@class NSString, NSObject;

@interface _DKDeviceActivityStandingQuery : NSObject <_DKStandingQuery> {

	NSString* queryIdentifier;
	NSObject*<OS_xpc_object> activity;

}

@property (nonatomic,retain) NSString * queryIdentifier; 
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity; 
-(id)init;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(id)fetchResultForDayOfWeek:(long long)arg1 withStorage:(id)arg2 ;
-(void)setQueryIdentifier:(NSString *)arg1 ;
-(NSString *)queryIdentifier;
-(double)_deviceActivityEphemerality;
-(void)executeWithStorage:(id)arg1 referenceDate:(id)arg2 ;
-(id)_customIdentifierForDayOfWeek:(long long)arg1 ;
-(BOOL)_shouldDefer;
-(id)_predicateForDeletedEventsWithReferenceDate:(id)arg1 ;
-(long long)_computeSlotForDate:(id)arg1 ;
-(id)histogramForDate:(id)arg1 withReference:(id)arg2 andUpdate:(id)arg3 ;
-(id)fetchResultForDayOfWeek:(long long)arg1 ;
-(id)fetchResult;
-(void)executeWithStorage:(id)arg1 ;
-(id)fetchResultFromStorage:(id)arg1 ;
-(id)fetchResultWithReferenceDate:(id)arg1 withStorage:(id)arg2 ;
@end

