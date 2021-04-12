/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)_nextAlertItemToTest;
-(void)_dismissCurrentItem;
-(id)alertForIndex:(long long)arg1 ;
-(id)_mapsApp;
-(id)_anyAppIcon;
-(id)dataPlanAlertItemForCase:(long long)arg1 ;
-(id)_anyUserInstalledAppIcon;
-(id)_anySUDescriptor;
-(NSArray *)recipesToTest;
-(void)setRecipesToTest:(NSArray *)arg1 ;
@end

