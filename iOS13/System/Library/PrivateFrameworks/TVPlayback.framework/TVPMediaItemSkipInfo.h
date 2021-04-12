/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSString;

@interface TVPMediaItemSkipInfo : NSObject {

	unsigned long long _type;
	double _start;
	double _duration;
	double _target;
	NSString* _localizedTitle;

}

@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double start;                                //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double target;                               //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
-(id)description;
-(unsigned long long)type;
-(double)target;
-(double)start;
-(double)duration;
-(NSString *)localizedTitle;
-(id)_typeDescription;
-(id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4 localizedTitle:(id)arg5 ;
-(id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4 ;
@end

