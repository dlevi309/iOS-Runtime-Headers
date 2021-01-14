/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)change;
-(unsigned long long)options;
-(NSObject *)object;
-(NSString *)keyPath;
-(void)dealloc;
-(id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned long long)arg3 change:(/*^block*/id)arg4 ;
@end

