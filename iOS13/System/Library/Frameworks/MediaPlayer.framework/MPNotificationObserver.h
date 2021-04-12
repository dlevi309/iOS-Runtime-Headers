/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString;

@interface MPNotificationObserver : NSObject {

	NSString* _name;
	id _object;
	/*^block*/id _handler;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id object;                  //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) id handler;                   //@synthesize handler=_handler - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(id)object;
-(id)handler;
-(void)_handleNotification:(id)arg1 ;
-(id)initWithName:(id)arg1 object:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

