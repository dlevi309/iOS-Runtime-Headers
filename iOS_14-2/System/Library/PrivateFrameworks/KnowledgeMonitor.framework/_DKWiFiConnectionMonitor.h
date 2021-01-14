/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/KnowledgeMonitor-Structs.h>
#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/_DKHistoricalDeletingMonitor.h>

@class NWPathEvaluator, NSString;

@interface _DKWiFiConnectionMonitor : _DKMonitor <_DKHistoricalDeletingMonitor> {

	/*^block*/id historicalDeletingHandler;
	NWPathEvaluator* _pathEvaluator;
	NSString* _currentWirelessSSID;
	WiFiManagerClientRef _wifiManager;

}

@property (nonatomic,retain) NWPathEvaluator * pathEvaluator;               //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (nonatomic,copy) NSString * currentWirelessSSID;                  //@synthesize currentWirelessSSID=_currentWirelessSSID - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef wifiManager;              //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,copy) id historicalDeletingHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_eventWithSSID:(id)arg1 date:(id)arg2 ;
-(void)setHistoricalDeletingHandler:(id)arg1 ;
-(NWPathEvaluator *)pathEvaluator;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)historicalDeletingHandler;
-(WiFiManagerClientRef)wifiManager;
-(void)setWifiManager:(WiFiManagerClientRef)arg1 ;
-(void)setPathEvaluator:(NWPathEvaluator *)arg1 ;
-(void)start;
-(void)setCurrentWirelessSSID:(NSString *)arg1 ;
-(void)stop;
-(NSString *)currentWirelessSSID;
@end

