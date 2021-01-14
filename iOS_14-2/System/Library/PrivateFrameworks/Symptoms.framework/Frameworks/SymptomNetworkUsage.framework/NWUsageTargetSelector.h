/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFilter:(unsigned long long)arg1 ;
-(unsigned long long)filter;
-(void)setEvents:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)events;
-(id)initWithSelection:(id)arg1 ;
-(id)initWithMultipleSelections:(id)arg1 ;
-(BOOL)applySelection:(id)arg1 ;
-(BOOL)shouldAddProvider:(int)arg1 ;
-(NSDictionary *)suppliedParams;
-(void)setSuppliedParams:(NSDictionary *)arg1 ;
@end

