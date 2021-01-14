/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSProgress.h>

@class NSXPCConnection;

@interface _NSProgressWithRemoteParent : NSProgress {

	NSXPCConnection* _parentConnection;
	unsigned long long _sequence;

}

@property (retain) NSXPCConnection * parentConnection;              //@synthesize parentConnection=_parentConnection - In the implementation block
@property (assign) unsigned long long sequence;                     //@synthesize sequence=_sequence - In the implementation block
-(void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(BOOL)arg3 ;
-(NSXPCConnection *)parentConnection;
-(unsigned long long)sequence;
-(void)_updateFractionCompleted:(NSProgressFractionTuple)arg1 ;
-(void)setSequence:(unsigned long long)arg1 ;
-(void)setParentConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

