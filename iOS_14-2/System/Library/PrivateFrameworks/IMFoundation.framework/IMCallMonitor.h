/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSDate, NSString;

@interface IMCallMonitor : NSObject <CXCallObserverDelegate> {

	CXCallObserver* _callCenter;
	BOOL _wasOnCall;
	NSDate* _lastCallDate;

}

@property (nonatomic,readonly) BOOL isOnCall; 
@property (nonatomic,retain,readonly) NSDate * dateLastCallEnded;              //@synthesize lastCallDate=_lastCallDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)isOnCall;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(NSDate *)dateLastCallEnded;
@end

