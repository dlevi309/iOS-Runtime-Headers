/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/


@interface _SBSHardwareButtonEventConfiguration : NSObject {

	unsigned long long _eventMask;
	long long _maximumPriority;

}

@property (assign,nonatomic) unsigned long long eventMask;              //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) long long maximumPriority;                 //@synthesize maximumPriority=_maximumPriority - In the implementation block
-(unsigned long long)eventMask;
-(long long)maximumPriority;
-(id)description;
-(void)setEventMask:(unsigned long long)arg1 ;
-(void)setMaximumPriority:(long long)arg1 ;
@end

