/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>
#import <libobjc.A.dylib/CBScalablePipeManagerDelegate.h>

@class NSString, WPDaemonServer, NSSet;

@interface WPDManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate> {

	BOOL _isHomePod;
	BOOL _restricted;
	BOOL _testMode;
	long long _state;
	NSString* _name;
	WPDaemonServer* _server;
	NSSet* _cbManagers;

}

@property (assign,nonatomic) long long state;                       //@synthesize state=_state - In the implementation block
@property (__weak) WPDaemonServer * server;                         //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isHomePod;                      //@synthesize isHomePod=_isHomePod - In the implementation block
@property (assign,nonatomic) BOOL restricted;                       //@synthesize restricted=_restricted - In the implementation block
@property (assign,nonatomic) BOOL testMode;                         //@synthesize testMode=_testMode - In the implementation block
@property (nonatomic,retain) NSSet * cbManagers;                    //@synthesize cbManagers=_cbManagers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wpStateAsString:(long long)arg1 ;
+(id)cbStateAsString:(long long)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setServer:(WPDaemonServer *)arg1 ;
-(WPDaemonServer *)server;
-(void)cleanup;
-(void)update;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(BOOL)testMode;
-(void)setTestMode:(BOOL)arg1 ;
-(BOOL)isHomePod;
-(void)setRestricted:(BOOL)arg1 ;
-(BOOL)restricted;
-(NSSet *)cbManagers;
-(void)setCbManagers:(NSSet *)arg1 ;
-(id)generateStateDump;
-(void)cbManagerDidUpdateState:(id)arg1 ;
-(id)initWithServer:(id)arg1 Name:(id)arg2 ;
-(void)updateState:(long long)arg1 Restricted:(BOOL)arg2 ;
@end

