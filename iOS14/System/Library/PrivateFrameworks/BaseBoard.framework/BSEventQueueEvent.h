/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSString;

@interface BSEventQueueEvent : NSObject {

	/*^block*/id _handler;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)eventWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)execute;
-(NSString *)name;
-(id)description;
@end

