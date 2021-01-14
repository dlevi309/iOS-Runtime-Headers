/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>
#import <libobjc.A.dylib/CBScalablePipeManagerDelegate.h>

@class NSString, WPDaemonServer, NSSet, NSIndexSet;

@interface WPDManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate> {

	BOOL _isHomePod;
	BOOL _restricted;
	BOOL _testMode;
	long long _state;
	NSString* _name;
	WPDaemonServer* _server;
	NSSet* _cbManagers;

}

@property (assign,nonatomic) long long state;                           //@synthesize state=_state - In the implementation block
@property (__weak) WPDaemonServer * server;                             //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isHomePod;                          //@synthesize isHomePod=_isHomePod - In the implementation block
@property (assign,nonatomic) BOOL restricted;                           //@synthesize restricted=_restricted - In the implementation block
@property (assign,nonatomic) BOOL testMode;                             //@synthesize testMode=_testMode - In the implementation block
@property (nonatomic,retain) NSSet * cbManagers;                        //@synthesize cbManagers=_cbManagers - In the implementation block
@property (nonatomic,readonly) BOOL isInternalBuild; 
@property (nonatomic,readonly) NSIndexSet * scanWhiteList; 
@property (nonatomic,readonly) NSIndexSet * advWhiteList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isInternalBuild;
+(id)scanWhiteList;
+(id)advWhiteList;
+(id)wpStateAsString:(long long)arg1 ;
+(id)cbStateAsString:(long long)arg1 ;
+(void)initializeAdvBlackList:(id)arg1 AdvWhiteList:(id)arg2 ScanBlackList:(id)arg3 ScanWhiteList:(id)arg4 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(id)generateStateDump;
-(void)setTestMode:(BOOL)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)setCbManagers:(NSSet *)arg1 ;
-(void)setServer:(WPDaemonServer *)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
-(NSSet *)cbManagers;
-(BOOL)isHomePod;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(NSString *)name;
-(BOOL)testMode;
-(void)cbManagerDidUpdateState:(id)arg1 ;
-(void)update;
-(NSString *)description;
-(BOOL)isInternalBuild;
-(WPDaemonServer *)server;
-(void)cleanup;
-(BOOL)restricted;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
-(NSIndexSet *)scanWhiteList;
-(NSIndexSet *)advWhiteList;
-(id)initWithServer:(id)arg1 Name:(id)arg2 ;
-(void)updateState:(long long)arg1 Restricted:(BOOL)arg2 ;
-(BOOL)isScanWhitelistedForType:(unsigned char)arg1 ;
-(BOOL)isAdvertisingWhitelistedForType:(unsigned char)arg1 ;
@end

