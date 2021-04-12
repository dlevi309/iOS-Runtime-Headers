/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString;

@interface MPKeyValueObserver : NSObject {

	id _object;
	NSString* _keyPath;
	/*^block*/id _handler;

}

@property (nonatomic,__weak,readonly) id object;                     //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,copy,readonly) id handler;                      //@synthesize handler=_handler - In the implementation block
-(void)dealloc;
-(id)object;
-(id)handler;
-(NSString *)keyPath;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
@end

