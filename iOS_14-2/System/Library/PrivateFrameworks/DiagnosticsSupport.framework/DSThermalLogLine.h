/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(float)maxTemp;
-(id)initWithLogLine:(id)arg1 ;
-(BOOL)isTrapEvent;
-(BOOL)isTrapEntry;
-(void)setMaxTemp:(float)arg1 ;
@end

