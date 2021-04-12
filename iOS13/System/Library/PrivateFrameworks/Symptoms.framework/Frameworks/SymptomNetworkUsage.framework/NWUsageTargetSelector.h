/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/


@class NSDictionary;

@interface NWUsageTargetSelector : NSObject {

	BOOL _hasExplicitTCP;
	BOOL _explicitTCPValue;
	BOOL _hasExplicitUDP;
	BOOL _explicitUDPValue;
	BOOL _hasExplicitChannels;
	BOOL _explicitChannelsValue;
	BOOL _hasExplicitSockets;
	BOOL _explicitSocketsValue;
	BOOL _hasExplicitQUIC;
	BOOL _explicitQUICValue;
	NSDictionary* _suppliedParams;
	unsigned long long _filter;
	unsigned long long _events;

}

@property (retain) NSDictionary * suppliedParams;              //@synthesize suppliedParams=_suppliedParams - In the implementation block
@property (assign) unsigned long long filter;                  //@synthesize filter=_filter - In the implementation block
@property (assign) unsigned long long events;                  //@synthesize events=_events - In the implementation block
-(id)description;
-(unsigned long long)events;
-(void)setEvents:(unsigned long long)arg1 ;
-(void)setFilter:(unsigned long long)arg1 ;
-(unsigned long long)filter;
-(id)initWithSelection:(id)arg1 ;
-(BOOL)applySelection:(id)arg1 ;
-(id)initWithMultipleSelections:(id)arg1 ;
-(BOOL)shouldAddProvider:(int)arg1 ;
-(NSDictionary *)suppliedParams;
-(void)setSuppliedParams:(NSDictionary *)arg1 ;
@end

