/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/

#import <DiagnosticsSupport/DSLogLine.h>

@class NSString;

@interface DSThermalLogLine : DSLogLine {

	float _maxTemp;
	NSString* _eventType;

}

@property (nonatomic,retain) NSString * eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) float maxTemp;                     //@synthesize maxTemp=_maxTemp - In the implementation block
@property (nonatomic,readonly) BOOL isTrapEvent; 
@property (nonatomic,readonly) BOOL isTrapEntry; 
-(NSString *)eventType;
-(void)setEventType:(NSString *)arg1 ;
-(id)initWithLogLine:(id)arg1 ;
-(BOOL)isTrapEvent;
-(BOOL)isTrapEntry;
-(float)maxTemp;
-(void)setMaxTemp:(float)arg1 ;
@end

