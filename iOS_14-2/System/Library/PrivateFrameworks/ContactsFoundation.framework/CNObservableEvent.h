/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)eventType;
-(BOOL)hasValue;
-(NSError *)error;
-(void)dematerializeWithObserver:(id)arg1 ;
-(id)value;
@end

