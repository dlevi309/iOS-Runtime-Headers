/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSNumber, MPSectionedCollection;

@interface MPAVRoutingViewControllerUpdateDisplayedRoutesState : NSObject {

	NSNumber* _version;
	MPSectionedCollection* _oldItems;
	MPSectionedCollection* _updatedItems;
	/*^block*/id _isEqualBlock;
	/*^block*/id _isUpdatedBlock;

}

@property (nonatomic,copy) NSNumber * version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * oldItems;                  //@synthesize oldItems=_oldItems - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * updatedItems;              //@synthesize updatedItems=_updatedItems - In the implementation block
@property (nonatomic,copy) id isEqualBlock;                                   //@synthesize isEqualBlock=_isEqualBlock - In the implementation block
@property (nonatomic,copy) id isUpdatedBlock;                                 //@synthesize isUpdatedBlock=_isUpdatedBlock - In the implementation block
-(MPSectionedCollection *)oldItems;
-(void)setOldItems:(MPSectionedCollection *)arg1 ;
-(MPSectionedCollection *)updatedItems;
-(void)setUpdatedItems:(MPSectionedCollection *)arg1 ;
-(id)isEqualBlock;
-(void)setIsEqualBlock:(id)arg1 ;
-(id)isUpdatedBlock;
-(void)setIsUpdatedBlock:(id)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
@end

