/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@class NSString, NSArray, MTEventHandler;

@interface MTEventHandlerRegistration : MTObject {

	NSString* _registeredName;
	Class _eventHandlerClass;
	NSArray* _eventData;
	MTEventHandler* _eventHandler;

}

@property (nonatomic,retain) NSString * registeredName;                  //@synthesize registeredName=_registeredName - In the implementation block
@property (nonatomic,retain) Class eventHandlerClass;                    //@synthesize eventHandlerClass=_eventHandlerClass - In the implementation block
@property (nonatomic,retain) NSArray * eventData;                        //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,retain) MTEventHandler * eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
-(MTEventHandler *)eventHandler;
-(void)setEventHandler:(MTEventHandler *)arg1 ;
-(NSArray *)eventData;
-(void)setEventData:(NSArray *)arg1 ;
-(void)setRegisteredName:(NSString *)arg1 ;
-(void)setEventHandlerClass:(Class)arg1 ;
-(Class)eventHandlerClass;
-(NSString *)registeredName;
-(id)initWithMetricsKit:(id)arg1 name:(id)arg2 class:(Class)arg3 eventData:(id)arg4 ;
@end

