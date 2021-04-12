/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)outputData;
-(NSNumber *)startTime;
-(id)initWithName:(id)arg1 metrics:(id)arg2 ;
-(void)startWithFrameCount:(id)arg1 ;
-(void)stopWithFrameCount:(id)arg1 ;
-(id)getObjectForKey:(id)arg1 ;
@end

