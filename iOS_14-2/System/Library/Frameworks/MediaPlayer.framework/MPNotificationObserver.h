/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)object;
-(id)initWithName:(id)arg1 object:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)name;
-(id)handler;
-(void)_handleNotification:(id)arg1 ;
-(void)dealloc;
@end

