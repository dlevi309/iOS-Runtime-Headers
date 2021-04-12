/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPublicEventNode:(id)arg1 consolidatedAddress:(id)arg2 businessItemMuid:(unsigned long long)arg3 ;
-(PGGraphPublicEventNode *)publicEventNode;
-(PGConsolidatedAddress *)consolidatedAddress;
-(unsigned long long)businessItemMuid;
@end

