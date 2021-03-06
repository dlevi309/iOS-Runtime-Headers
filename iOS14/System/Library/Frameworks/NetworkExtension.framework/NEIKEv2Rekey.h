/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString, PCSimpleTimer;

@interface NEIKEv2Rekey : NSObject <NSObject> {

	int _ikeLifetimeMinutes;
	int _childLifetimeMinutes;
	PCSimpleTimer* _ikeLifetime;
	PCSimpleTimer* _childLifetime;
	/*^block*/id _ikeRekeyHandler;
	/*^block*/id _childRekeyHandler;

}

@property (retain) PCSimpleTimer * ikeLifetime;                     //@synthesize ikeLifetime=_ikeLifetime - In the implementation block
@property (retain) PCSimpleTimer * childLifetime;                   //@synthesize childLifetime=_childLifetime - In the implementation block
@property (assign) int ikeLifetimeMinutes;                          //@synthesize ikeLifetimeMinutes=_ikeLifetimeMinutes - In the implementation block
@property (assign) int childLifetimeMinutes;                        //@synthesize childLifetimeMinutes=_childLifetimeMinutes - In the implementation block
@property (copy) id ikeRekeyHandler;                                //@synthesize ikeRekeyHandler=_ikeRekeyHandler - In the implementation block
@property (copy) id childRekeyHandler;                              //@synthesize childRekeyHandler=_childRekeyHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearTimers;
-(void)startIKETimer:(int)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(void)startChildTimer:(int)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(void)invokeIKERekeyHandler;
-(void)invokeChildRekeyHandler;
-(PCSimpleTimer *)ikeLifetime;
-(void)setIkeLifetime:(PCSimpleTimer *)arg1 ;
-(void)setIkeLifetimeMinutes:(int)arg1 ;
-(void)setIkeRekeyHandler:(id)arg1 ;
-(int)ikeLifetimeMinutes;
-(PCSimpleTimer *)childLifetime;
-(void)setChildLifetime:(PCSimpleTimer *)arg1 ;
-(void)setChildLifetimeMinutes:(int)arg1 ;
-(void)setChildRekeyHandler:(id)arg1 ;
-(int)childLifetimeMinutes;
-(id)ikeRekeyHandler;
-(id)childRekeyHandler;
-(void)dealloc;
@end

