/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUUserActivityContext.h>

@class NSMutableArray, NSArray;

@interface MPUMutableUserActivityContext : MPUUserActivityContext {

	NSMutableArray* _containerItems;

}

@property (nonatomic,copy) NSArray * containerItems; 
@property (assign,nonatomic) long long originatorType; 
@property (assign,nonatomic) long long originatorVersion; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOriginatorType:(long long)arg1 ;
-(void)setOriginatorVersion:(long long)arg1 ;
-(NSArray *)containerItems;
-(void)setContainerItems:(NSArray *)arg1 ;
-(void)addContainerItem:(id)arg1 ;
-(void)insertContainerItem:(id)arg1 afterContainerItem:(id)arg2 ;
-(void)removeContainerItem:(id)arg1 ;
@end

