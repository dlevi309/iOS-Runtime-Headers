/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/

#import <StorageSettings/STStorageTip.h>

@class NSArray;

@interface STStorageActionTip : STStorageTip {

	NSArray* _significantItems;

}

@property (assign,nonatomic) Class detailControllerClass; 
@property (nonatomic,copy) NSArray * significantItems;                 //@synthesize significantItems=_significantItems - In the implementation block
-(Class)detailControllerClass;
-(id)init;
-(void)setDetailControllerClass:(Class)arg1 ;
-(NSArray *)significantItems;
-(void)setSignificantItems:(NSArray *)arg1 ;
@end

