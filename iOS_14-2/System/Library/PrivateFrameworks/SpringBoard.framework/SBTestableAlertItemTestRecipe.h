/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class SBAlertItem, NSArray, NSString;

@interface SBTestableAlertItemTestRecipe : NSObject <SBTestRecipe> {

	SBAlertItem* _item;
	NSArray* _recipesToTest;

}

@property (nonatomic,retain) NSArray * recipesToTest;               //@synthesize recipesToTest=_recipesToTest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(id)testCases;
+(id)testCasesGrouped;
+(id)nameForCase:(long long)arg1 ;
-(id)title;
-(id)_mapsApp;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)_nextAlertItemToTest;
-(void)_dismissCurrentItem;
-(id)alertForIndex:(long long)arg1 ;
-(id)dataPlanAlertItemForCase:(long long)arg1 ;
-(id)_anyAppIcon;
-(id)_anyUserInstalledAppIcon;
-(id)_anySUDescriptor;
-(NSArray *)recipesToTest;
-(void)setRecipesToTest:(NSArray *)arg1 ;
@end

