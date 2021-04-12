/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGGraphPublicEventNode, PGConsolidatedAddress;

@interface PGResolvablePublicEventBusinessItem : NSObject {

	PGGraphPublicEventNode* _publicEventNode;
	PGConsolidatedAddress* _consolidatedAddress;
	unsigned long long _businessItemMuid;

}

@property (nonatomic,readonly) PGGraphPublicEventNode * publicEventNode;                 //@synthesize publicEventNode=_publicEventNode - In the implementation block
@property (nonatomic,readonly) PGConsolidatedAddress * consolidatedAddress;              //@synthesize consolidatedAddress=_consolidatedAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long businessItemMuid;                      //@synthesize businessItemMuid=_businessItemMuid - In the implementation block
-(unsigned long long)businessItemMuid;
-(id)initWithPublicEventNode:(id)arg1 consolidatedAddress:(id)arg2 businessItemMuid:(unsigned long long)arg3 ;
-(PGGraphPublicEventNode *)publicEventNode;
-(PGConsolidatedAddress *)consolidatedAddress;
@end

