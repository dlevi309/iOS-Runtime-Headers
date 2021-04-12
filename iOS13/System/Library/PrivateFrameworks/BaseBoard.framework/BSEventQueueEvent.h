/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSString;

@interface BSEventQueueEvent : NSObject {

	NSString* _name;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id handler;                   //@synthesize handler=_handler - In the implementation block
+(id)eventWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)description;
-(NSString *)name;
-(id)handler;
-(void)setName:(NSString *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)_execute;
-(void)execute;
-(void)executeFromEventQueue;
-(BOOL)isEqualToEvent:(id)arg1 ;
@end

