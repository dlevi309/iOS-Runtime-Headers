/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/


@interface _SBSHardwareButtonEventConfiguration : NSObject {

	unsigned long long _eventMask;
	long long _maximumPriority;

}

@property (assign,nonatomic) unsigned long long eventMask;              //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) long long maximumPriority;                 //@synthesize maximumPriority=_maximumPriority - In the implementation block
-(id)description;
-(unsigned long long)eventMask;
-(void)setEventMask:(unsigned long long)arg1 ;
-(long long)maximumPriority;
-(void)setMaximumPriority:(long long)arg1 ;
@end

