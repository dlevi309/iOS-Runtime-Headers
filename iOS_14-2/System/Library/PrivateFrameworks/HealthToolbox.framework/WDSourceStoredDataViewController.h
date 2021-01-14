/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDStoredDataByCategoryViewController.h>

@class HKSource;

@interface WDSourceStoredDataViewController : WDStoredDataByCategoryViewController {

	HKSource* _source;

}

@property (nonatomic,readonly) BOOL sourceIsInstalled; 
@property (nonatomic,readonly) BOOL sourceHasData; 
@property (nonatomic,retain) HKSource * source;                     //@synthesize source=_source - In the implementation block
-(void)setSource:(HKSource *)arg1 ;
-(HKSource *)source;
-(id)storedDataPredicate;
-(id)storedDataDisplayName;
-(BOOL)shouldShowDeleteAllDataButton;
-(void)deleteAllStoredData;
-(BOOL)sourceHasData;
-(BOOL)sourceIsInstalled;
-(void)deleteSource;
-(void)deleteAllSourceData;
@end

