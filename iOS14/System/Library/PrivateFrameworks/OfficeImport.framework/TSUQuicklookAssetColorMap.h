/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)appAssetPath;
-(NSMutableDictionary *)assetMap;
-(void)setAssetMap:(NSMutableDictionary *)arg1 ;
-(void)setAppAssetPath:(NSString *)arg1 ;
@end

