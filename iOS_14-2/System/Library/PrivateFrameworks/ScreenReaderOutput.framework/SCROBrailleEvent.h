/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)data2;
-(id)data3;
-(id)description;
-(id)data;
-(int)type;
-(BOOL)shouldDisplay;
-(void)setShouldDisplay:(BOOL)arg1 ;
-(id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4 ;
@end

