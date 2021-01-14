/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@interface CalLocationAuthorizationStatus : NSObject {

	int _status;
	unsigned long long _precision;

}

@property (nonatomic,readonly) int status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long precision;              //@synthesize precision=_precision - In the implementation block
-(unsigned long long)precision;
-(id)initWithStatus:(int)arg1 precision:(unsigned long long)arg2 ;
-(int)status;
@end

