/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/

#import <PairedSync/PairedSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PSYActivityInfo, NSError;

@interface PSYSyncSessionActivity : NSObject <NSCopying, NSSecureCoding> {

	BOOL _finishedSending;
	BOOL _sawADropout;
	PSYActivityInfo* _activityInfo;
	double _activityProgress;
	NSError* _error;
	unsigned long long _activityState;
	long long _interruptionCount;
	unsigned long long _startDropoutCount;

}

@property (nonatomic,readonly) PSYActivityInfo * activityInfo;                             //@synthesize activityInfo=_activityInfo - In the implementation block
@property (nonatomic,readonly) double activityProgress;                                    //@synthesize activityProgress=_activityProgress - In the implementation block
@property (nonatomic,readonly) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (getter=isFinishedSending,nonatomic,readonly) BOOL finishedSending;              //@synthesize finishedSending=_finishedSending - In the implementation block
@property (nonatomic,readonly) unsigned long long activityState;                           //@synthesize activityState=_activityState - In the implementation block
@property (nonatomic,readonly) long long interruptionCount;                                //@synthesize interruptionCount=_interruptionCount - In the implementation block
@property (nonatomic,readonly) unsigned long long startDropoutCount;                       //@synthesize startDropoutCount=_startDropoutCount - In the implementation block
@property (nonatomic,readonly) BOOL sawADropout;                                           //@synthesize sawADropout=_sawADropout - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)activityState;
-(double)activityProgress;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(long long)interruptionCount;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(PSYActivityInfo *)activityInfo;
-(BOOL)sawADropout;
-(unsigned long long)startDropoutCount;
-(id)initWithActivityInfo:(id)arg1 progress:(double)arg2 error:(id)arg3 state:(unsigned long long)arg4 finishedSending:(BOOL)arg5 interruptionCount:(long long)arg6 startDropoutCount:(unsigned long long)arg7 sawADropout:(BOOL)arg8 ;
-(id)syncSessionActivityByUpdatingProgress:(double)arg1 ;
-(BOOL)isFinishedSending;
@end

