/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/


@class NSMutableDictionary;

@interface C2RoutingTable : NSObject {

	NSMutableDictionary* _routingTable;

}

@property (nonatomic,retain) NSMutableDictionary * routingTable;              //@synthesize routingTable=_routingTable - In the implementation block
-(id)init;
-(void)updateOriginalHostname:(id)arg1 destinationHostname:(id)arg2 ;
-(id)copyAndDecorateRequest:(id)arg1 ;
-(NSMutableDictionary *)routingTable;
-(void)setRoutingTable:(NSMutableDictionary *)arg1 ;
@end

