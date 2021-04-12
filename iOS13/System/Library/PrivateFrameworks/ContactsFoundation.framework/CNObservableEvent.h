/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSError;

@interface CNObservableEvent : NSObject

@property (nonatomic,readonly) unsigned long long eventType; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,copy,readonly) NSError * error; 
+(id)eventWithResult:(id)arg1 ;
+(id)completionEvent;
+(id)failureEventWithError:(id)arg1 ;
-(NSError *)error;
-(id)value;
-(unsigned long long)eventType;
-(BOOL)hasValue;
-(void)dematerializeWithObserver:(id)arg1 ;
@end

