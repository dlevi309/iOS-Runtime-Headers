/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/


@protocol PXPlacesMapLayoutItem;
@interface PXPlacesMapLayoutChange : NSObject {

	id<PXPlacesMapLayoutItem> _sourceLayoutItem;
	id<PXPlacesMapLayoutItem> _targetLayoutItem;
	long long _type;

}

@property (nonatomic,readonly) id<PXPlacesMapLayoutItem> sourceLayoutItem;              //@synthesize sourceLayoutItem=_sourceLayoutItem - In the implementation block
@property (nonatomic,readonly) id<PXPlacesMapLayoutItem> targetLayoutItem;              //@synthesize targetLayoutItem=_targetLayoutItem - In the implementation block
@property (readonly) long long type;                                                    //@synthesize type=_type - In the implementation block
-(id)description;
-(long long)type;
-(id)initWithSourceLayoutItem:(id)arg1 targetLayoutItem:(id)arg2 type:(long long)arg3 ;
-(id<PXPlacesMapLayoutItem>)sourceLayoutItem;
-(id<PXPlacesMapLayoutItem>)targetLayoutItem;
@end

