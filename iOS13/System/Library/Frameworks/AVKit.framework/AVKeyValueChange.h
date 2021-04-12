/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class NSString;

@interface AVKeyValueChange : NSObject {

	id _value;
	id _oldValue;
	NSString* _keyPath;
	id _observationToken;

}

@property (nonatomic,readonly) id value;                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) id oldValue;                      //@synthesize oldValue=_oldValue - In the implementation block
@property (nonatomic,readonly) NSString * keyPath;               //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) id observationToken;              //@synthesize observationToken=_observationToken - In the implementation block
-(id)value;
-(NSString *)keyPath;
-(id)oldValue;
-(id)initWithValue:(id)arg1 oldValue:(id)arg2 keyPath:(id)arg3 observationToken:(id)arg4 ;
-(id)observationToken;
@end

