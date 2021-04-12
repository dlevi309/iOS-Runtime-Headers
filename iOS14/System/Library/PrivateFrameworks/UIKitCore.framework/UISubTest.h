/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSNumber, NSMutableArray, NSString, NSMutableDictionary;

@interface UISubTest : NSObject {

	NSNumber* _startTime;
	NSNumber* _startFrame;
	NSMutableArray* _time;
	NSMutableArray* _fps;
	NSString* _testName;
	BOOL _showTime;
	BOOL _showFps;
	NSMutableDictionary* _data;

}

@property (readonly) NSNumber * startTime;              //@synthesize startTime=_startTime - In the implementation block
-(id)initWithName:(id)arg1 metrics:(id)arg2 ;
-(void)startWithFrameCount:(id)arg1 ;
-(id)getObjectForKey:(id)arg1 ;
-(id)outputData;
-(void)stopWithFrameCount:(id)arg1 ;
-(NSNumber *)startTime;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

