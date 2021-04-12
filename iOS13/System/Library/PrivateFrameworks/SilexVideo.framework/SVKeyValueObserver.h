/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@class NSString, NSObject;

@interface SVKeyValueObserver : NSObject {

	NSString* _keyPath;
	NSObject* _object;
	unsigned long long _options;
	/*^block*/id _change;

}

@property (nonatomic,copy,readonly) NSString * keyPath;                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,__weak,readonly) NSObject * object;                //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id change;                          //@synthesize change=_change - In the implementation block
-(void)dealloc;
-(NSObject *)object;
-(unsigned long long)options;
-(NSString *)keyPath;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)change;
-(id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned long long)arg3 change:(/*^block*/id)arg4 ;
@end

