/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUUserActivityContainerItem.h>

@class MPMediaEntity;

@interface MPUMutableUserActivityContainerItem : MPUUserActivityContainerItem

@property (assign,nonatomic) long long containerItemType; 
@property (nonatomic,retain) MPMediaEntity * selectedMediaEntity; 
@property (nonatomic,retain) MPMediaEntity * visualReferenceMediaEntity; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerItemType:(long long)arg1 ;
-(void)setSelectedMediaEntity:(MPMediaEntity *)arg1 ;
-(void)setVisualReferenceMediaEntity:(MPMediaEntity *)arg1 ;
@end

