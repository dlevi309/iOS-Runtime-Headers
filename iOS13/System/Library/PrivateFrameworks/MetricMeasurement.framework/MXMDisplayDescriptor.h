/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/


@class CADisplay, NSString;

@interface MXMDisplayDescriptor : NSObject {

	CADisplay* _display;

}

@property (nonatomic,readonly) CADisplay * display;                  //@synthesize display=_display - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) double refreshRate; 
@property (nonatomic,readonly) BOOL main; 
@property (getter=main,nonatomic,readonly) BOOL isMain; 
-(NSString *)name;
-(BOOL)main;
-(id)initWithDisplay:(id)arg1 ;
-(double)refreshRate;
-(CADisplay *)display;
@end

