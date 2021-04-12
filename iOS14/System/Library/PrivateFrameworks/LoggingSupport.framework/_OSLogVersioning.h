/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)performDestructiveUpdates:(id*)arg1 ;
-(id)initWithCollection:(id)arg1 error:(id*)arg2 ;
-(id)initWithCollection:(id)arg1 closeOnRelease:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)checkTimesyncDB:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)repairTimesyncDB:(id*)arg1 ;
-(BOOL)hasEndTimeRef;
-(long long)state;
-(long long)version;
-(void)dealloc;
@end

