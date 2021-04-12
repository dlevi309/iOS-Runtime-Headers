/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

