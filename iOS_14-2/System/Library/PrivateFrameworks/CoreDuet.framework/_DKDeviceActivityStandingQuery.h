/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)fetchResult;
-(id)fetchResultForDayOfWeek:(long long)arg1 ;
-(id)init;
-(void)executeWithStorage:(id)arg1 ;
-(NSObject*<OS_xpc_object>)activity;
-(id)fetchResultForDayOfWeek:(long long)arg1 withStorage:(id)arg2 ;
-(void)executeWithStorage:(id)arg1 referenceDate:(id)arg2 ;
-(id)fetchResultFromStorage:(id)arg1 ;
-(NSString *)queryIdentifier;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setQueryIdentifier:(NSString *)arg1 ;
@end

