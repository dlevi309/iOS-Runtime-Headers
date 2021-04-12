/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class MPMediaEntity, MPUContentItemIdentifierCollection, _MPUProtoBufUserActivityContainerItem;

@interface MPUUserActivityContainerItem : NSObject <NSCopying, NSMutableCopying> {

	long long _containerItemType;
	MPMediaEntity* _selectedMediaEntity;
	MPMediaEntity* _visualReferenceMediaEntity;

}

@property (nonatomic,readonly) MPUContentItemIdentifierCollection * MPU_selectedContentItemIdentifierCollection; 
@property (nonatomic,readonly) MPUContentItemIdentifierCollection * MPU_visualReferenceContentItemIdentifierCollection; 
@property (nonatomic,readonly) _MPUProtoBufUserActivityContainerItem * protoBufUserActivityContainerItem; 
@property (nonatomic,readonly) long long containerItemType;                                                                          //@synthesize containerItemType=_containerItemType - In the implementation block
@property (nonatomic,readonly) MPMediaEntity * selectedMediaEntity;                                                                  //@synthesize selectedMediaEntity=_selectedMediaEntity - In the implementation block
@property (nonatomic,readonly) MPMediaEntity * visualReferenceMediaEntity;                                                           //@synthesize visualReferenceMediaEntity=_visualReferenceMediaEntity - In the implementation block
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)containerItemType;
-(id)initWithContainerItemType:(long long)arg1 ;
-(MPMediaEntity *)selectedMediaEntity;
-(MPMediaEntity *)visualReferenceMediaEntity;
-(id)initWithProtoBufUserActivityContainerItem:(id)arg1 ;
-(_MPUProtoBufUserActivityContainerItem *)protoBufUserActivityContainerItem;
-(id)_MPU_contentItemIdentifierCollectionWithMediaEntity:(id)arg1 ;
-(MPUContentItemIdentifierCollection *)MPU_selectedContentItemIdentifierCollection;
-(MPUContentItemIdentifierCollection *)MPU_visualReferenceContentItemIdentifierCollection;
@end

