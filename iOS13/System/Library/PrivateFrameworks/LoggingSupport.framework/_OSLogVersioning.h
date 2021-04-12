/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class _OSLogCollectionReference;

@interface _OSLogVersioning : NSObject {

	_OSLogCollectionReference* _lcr;
	BOOL _closeOnRelease;
	BOOL _hasEndTimeRef;
	long long _state;
	long long _version;

}

@property (nonatomic,readonly) long long state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasEndTimeRef;              //@synthesize hasEndTimeRef=_hasEndTimeRef - In the implementation block
@property (nonatomic,readonly) long long version;               //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(long long)version;
-(long long)state;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)performDestructiveUpdates:(id*)arg1 ;
-(id)initWithCollection:(id)arg1 error:(id*)arg2 ;
-(id)initWithCollection:(id)arg1 closeOnRelease:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)checkTimesyncDB:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)repairTimesyncDB:(id*)arg1 ;
-(BOOL)hasEndTimeRef;
@end

