/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CBCentralManager, NSObject, ATVModel, NSString;

@interface CBConnectionsObserver : NSObject <CBCentralManagerDelegate> {

	BOOL _hasStarted;
	CBCentralManager* _central;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ATVModel* _model;

}

@property (retain) CBCentralManager * central;                              //@synthesize central=_central - In the implementation block
@property (__weak) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL hasStarted;                               //@synthesize hasStarted=_hasStarted - In the implementation block
@property (retain) ATVModel * model;                                        //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(ATVModel *)model;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setModel:(ATVModel *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)hasStarted;
-(void)setHasStarted:(BOOL)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(CBCentralManager *)central;
-(id)getStatus;
-(id)initWithCentralManager:(id)arg1 Queue:(id)arg2 Error:(id*)arg3 ;
-(void)cleanupWithError:(id*)arg1 ;
-(int)getAvailableHAPConnections;
-(void)attachSessionWithError:(id*)arg1 ;
-(void)setCentral:(CBCentralManager *)arg1 ;
-(void)updateBleStatus:(BTRemoteContext*)arg1 ;
@end

