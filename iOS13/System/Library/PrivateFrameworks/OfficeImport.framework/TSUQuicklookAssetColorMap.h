/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, NSString;

@interface TSUQuicklookAssetColorMap : NSObject {

	NSMutableDictionary* mAssetMap;
	NSString* mAppAssetPath;

}

@property (nonatomic,retain) NSMutableDictionary * assetMap; 
@property (nonatomic,retain) NSString * appAssetPath; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)quicklookAssetMap;
+(BOOL)hasAppAssets;
+(id)colorForResource:(id)arg1 ;
+(id)locatorForSageChartTextureSet:(id)arg1 image:(id)arg2 ;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)appAssetPath;
-(NSMutableDictionary *)assetMap;
-(void)setAssetMap:(NSMutableDictionary *)arg1 ;
-(void)setAppAssetPath:(NSString *)arg1 ;
@end

