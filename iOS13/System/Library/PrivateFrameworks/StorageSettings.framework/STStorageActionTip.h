/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/

#import <StorageSettings/STStorageTip.h>

@class NSArray;

@interface STStorageActionTip : STStorageTip {

	NSArray* _significantItems;

}

@property (assign,nonatomic) Class detailControllerClass; 
@property (nonatomic,copy) NSArray * significantItems;                 //@synthesize significantItems=_significantItems - In the implementation block
-(id)init;
-(Class)detailControllerClass;
-(void)setDetailControllerClass:(Class)arg1 ;
-(NSArray *)significantItems;
-(void)setSignificantItems:(NSArray *)arg1 ;
@end

