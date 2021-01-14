/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class AVLayoutItemAttributes;

@interface AVLayoutViewRowHead : NSObject {

	AVLayoutItemAttributes* _firstAttributesInLayoutOrder;
	AVLayoutItemAttributes* _firstAttributesInPriorityOrder;

}

@property (nonatomic,readonly) AVLayoutItemAttributes * firstAttributesInLayoutOrder;                       //@synthesize firstAttributesInLayoutOrder=_firstAttributesInLayoutOrder - In the implementation block
@property (nonatomic,__weak,readonly) AVLayoutItemAttributes * firstAttributesInPriorityOrder;              //@synthesize firstAttributesInPriorityOrder=_firstAttributesInPriorityOrder - In the implementation block
-(id)initWithFirstAttributesInLayoutOrder:(id)arg1 firstAttributesInPriorityOrder:(id)arg2 ;
-(AVLayoutItemAttributes *)firstAttributesInLayoutOrder;
-(AVLayoutItemAttributes *)firstAttributesInPriorityOrder;
@end

