/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_typeDescription;
-(NSString *)localizedTitle;
-(double)start;
-(id)description;
-(unsigned long long)type;
-(double)target;
-(double)duration;
-(id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4 ;
-(id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4 localizedTitle:(id)arg5 ;
@end

