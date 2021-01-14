/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@interface CADIdleChangeTrackingCleanupInfo : NSObject {

	int _numberOfChanges;
	double _languishPeriod;

}

@property (assign,nonatomic) double languishPeriod;              //@synthesize languishPeriod=_languishPeriod - In the implementation block
@property (assign,nonatomic) int numberOfChanges;                //@synthesize numberOfChanges=_numberOfChanges - In the implementation block
+(id)serverIdleChangeTrackingCleanupInfo;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(int)numberOfChanges;
-(void)setNumberOfChanges:(int)arg1 ;
-(double)languishPeriod;
-(void)setLanguishPeriod:(double)arg1 ;
-(id)initWithLanguishPeriod:(double)arg1 numberOfChanges:(int)arg2 ;
-(BOOL)isEqualToInfo:(id)arg1 ;
@end

