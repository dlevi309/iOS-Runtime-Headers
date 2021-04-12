/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_source;
@class NSObject, NSUUID, NSString, NSDate;

@interface TimedAction : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	int _interfaceIndex;
	unsigned long long _target;
	NSUUID* _connectionId;
	NSString* _owner;
	NSDate* _entryTime;

}

@property (nonatomic,readonly) NSUUID * connectionId;                //@synthesize connectionId=_connectionId - In the implementation block
@property (nonatomic,readonly) int interfaceIndex;                   //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (nonatomic,readonly) NSString * owner;                     //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSDate * entryTime;                   //@synthesize entryTime=_entryTime - In the implementation block
@property (assign,nonatomic) unsigned long long target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(unsigned long long)arg1 ;
-(int)interfaceIndex;
-(NSString *)owner;
-(id)description;
-(NSUUID *)connectionId;
-(NSDate *)entryTime;
-(unsigned long long)target;
-(void)dealloc;
-(id)initWithConnId:(id)arg1 interfaceIndex:(int)arg2 owner:(id)arg3 target:(unsigned long long)arg4 ;
@end

