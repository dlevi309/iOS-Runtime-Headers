/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSUUID, NSString;

@interface SFSessionCache : NSObject <NSSecureCoding> {

	BOOL _activated;
	BOOL _invalidated;
	NSMutableDictionary* _sessions;
	NSMutableDictionary* _timestamps;
	unsigned long long _capacity;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	NSUUID* _identifier;
	NSString* _serviceIdentifier;

}

@property (assign,nonatomic) unsigned long long capacity;                             //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)invalidate;
-(void)clearCache;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(unsigned long long)capacity;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(id)activeSessions;
-(NSString *)serviceIdentifier;
-(void)_ensureStarted;
-(void)_ensureStopped;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)_sessionWasInterrupted:(id)arg1 ;
-(void)_sessionWasInvalidated:(id)arg1 ;
-(BOOL)cacheFull;
-(void)_popCache;
-(id)_sessionWithDevice:(id)arg1 activate:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)sendRequestWithFlags:(unsigned)arg1 object:(id)arg2 responseHandler:(/*^block*/id)arg3 toDevice:(id)arg4 ;
-(void)sendWithFlags:(unsigned)arg1 object:(id)arg2 toDevice:(id)arg3 ;
-(id)sessionWithDevice:(id)arg1 activate:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)activePeerDeviceIDs;
@end

