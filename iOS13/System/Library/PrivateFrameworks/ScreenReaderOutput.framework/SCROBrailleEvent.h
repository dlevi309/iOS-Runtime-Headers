/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@interface SCROBrailleEvent : NSObject {

	int _type;
	id _data;
	id _data2;
	id _data3;
	BOOL _shouldDisplay;

}

@property (nonatomic,readonly) int type; 
@property (assign,nonatomic) BOOL shouldDisplay;              //@synthesize shouldDisplay=_shouldDisplay - In the implementation block
+(id)eventWithType:(int)arg1 data:(id)arg2 ;
+(id)eventWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4 ;
-(id)description;
-(int)type;
-(id)data;
-(BOOL)shouldDisplay;
-(void)setShouldDisplay:(BOOL)arg1 ;
-(id)data2;
-(id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4 ;
-(id)data3;
@end

