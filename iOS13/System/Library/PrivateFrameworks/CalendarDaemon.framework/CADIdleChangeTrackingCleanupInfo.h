/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@interface CADIdleChangeTrackingCleanupInfo : NSObject {

	int _numberOfChanges;
	double _languishPeriod;

}

@property (assign,nonatomic) double languishPeriod;              //@synthesize languishPeriod=_languishPeriod - In the implementation block
@property (assign,nonatomic) int numberOfChanges;                //@synthesize numberOfChanges=_numberOfChanges - In the implementation block
+(id)serverIdleChangeTrackingCleanupInfo;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)languishPeriod;
-(int)numberOfChanges;
-(void)setLanguishPeriod:(double)arg1 ;
-(void)setNumberOfChanges:(int)arg1 ;
-(id)initWithLanguishPeriod:(double)arg1 numberOfChanges:(int)arg2 ;
-(BOOL)isEqualToInfo:(id)arg1 ;
@end

