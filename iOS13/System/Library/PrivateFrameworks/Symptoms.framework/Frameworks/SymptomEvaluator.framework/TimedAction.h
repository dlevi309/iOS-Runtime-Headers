/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)setTarget:(unsigned long long)arg1 ;
-(unsigned long long)target;
-(NSString *)owner;
-(NSDate *)entryTime;
-(int)interfaceIndex;
-(NSUUID *)connectionId;
-(id)initWithConnId:(id)arg1 interfaceIndex:(int)arg2 owner:(id)arg3 target:(unsigned long long)arg4 ;
@end

