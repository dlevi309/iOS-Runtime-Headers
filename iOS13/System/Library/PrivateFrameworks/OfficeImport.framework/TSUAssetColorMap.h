/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary, NSDictionary;

@interface TSUAssetColorMap : NSObject {

	NSMutableDictionary* mAssetPathToColorMap;

}

@property (nonatomic,copy,readonly) NSDictionary * assetPathToColorMap; 
+(id)assetColorMap;
-(id)init;
-(id)TSUColorFromColorArray:(id)arg1 ;
-(void)addEntriesFromPlistBasename:(id)arg1 transformKeyBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)assetPathToColorMap;
-(void)addSharedEntries;
-(void)addChartEntries;
@end

