/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
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

