/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol WFNetworkListRecord;
@class NSString, NSDictionary, NSObject;

@interface WFAssociationContext : NSObject {

	BOOL _secondaryScanCompleted;
	unsigned long long _state;
	unsigned long long _originator;
	NSString* _sectionNameJoined;
	NSDictionary* _sectionCounts;
	NSObject*<WFNetworkListRecord> _network;

}

@property (assign,nonatomic) unsigned long long state;                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long originator;                       //@synthesize originator=_originator - In the implementation block
@property (nonatomic,readonly) NSString * stateDescription; 
@property (nonatomic,readonly) NSString * originatorDescription; 
@property (assign,nonatomic) BOOL secondaryScanCompleted;                         //@synthesize secondaryScanCompleted=_secondaryScanCompleted - In the implementation block
@property (nonatomic,copy) NSString * sectionNameJoined;                          //@synthesize sectionNameJoined=_sectionNameJoined - In the implementation block
@property (nonatomic,copy) NSDictionary * sectionCounts;                          //@synthesize sectionCounts=_sectionCounts - In the implementation block
@property (nonatomic,retain) NSObject*<WFNetworkListRecord> network;              //@synthesize network=_network - In the implementation block
-(id)networkName;
-(NSObject*<WFNetworkListRecord>)network;
-(id)description;
-(id)initWithNetwork:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(unsigned long long)originator;
-(NSString *)stateDescription;
-(void)setNetwork:(NSObject*<WFNetworkListRecord>)arg1 ;
-(void)setOriginator:(unsigned long long)arg1 ;
-(BOOL)secondaryScanCompleted;
-(NSDictionary *)sectionCounts;
-(NSString *)sectionNameJoined;
-(void)setSectionNameJoined:(NSString *)arg1 ;
-(void)setSectionCounts:(NSDictionary *)arg1 ;
-(void)setSecondaryScanCompleted:(BOOL)arg1 ;
-(NSString *)originatorDescription;
@end

