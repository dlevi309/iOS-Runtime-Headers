/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/

#import <SidecarCore/SidecarCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, RPStreamSession, SidecarSession;

@interface SidecarStream : NSObject <NSSecureCoding> {

	NSString* _identifier;
	RPStreamSession* _rapportStream;
	/*^block*/id _handler;
	SidecarSession* _session;
	AQ _status;
	AB _activated;

}

@property (readonly) RPStreamSession * rapportStream; 
@property (readonly) SidecarSession * session; 
@property (nonatomic,readonly) long long transport; 
@property (nonatomic,readonly) SCD_Struct_Si3 nwClientID; 
@property (readonly) unsigned long long status; 
@property (readonly) long long fileDescriptor; 
@property (readonly) NSString * identifier; 
@property (readonly) long long type; 
@property (readonly) unsigned long long flags; 
@property (copy) id handler; 
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(long long)transport;
-(void)setHandler:(id)arg1 ;
-(unsigned long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(SidecarSession *)session;
-(id)description;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(long long)fileDescriptor;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(id)handler;
-(unsigned long long)status;
-(void)dealloc;
-(SCD_Struct_Si3)nwClientID;
-(id)initWithIdentifier:(id)arg1 rapportStream:(id)arg2 ;
-(RPStreamSession *)rapportStream;
-(void)sendOPACK:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

