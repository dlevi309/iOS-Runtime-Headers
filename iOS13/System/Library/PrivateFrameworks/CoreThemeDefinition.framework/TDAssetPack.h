/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSString, CUIMutableCommonAssetStorage;

@interface TDAssetPack : NSObject <NSCopying> {

	BOOL wasModified;
	NSSet* tags;
	NSString* outputPath;
	CUIMutableCommonAssetStorage* assetStore;
	NSString* assetPackIdentifier;

}

@property (retain) CUIMutableCommonAssetStorage * assetStore; 
@property (nonatomic,retain) NSSet * tags; 
@property (nonatomic,copy) NSString * outputPath; 
@property (nonatomic,copy) NSString * assetPackIdentifier; 
@property (assign,nonatomic) BOOL wasModified; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)tags;
-(void)setTags:(NSSet *)arg1 ;
-(NSString *)assetPackIdentifier;
-(CUIMutableCommonAssetStorage *)assetStore;
-(void)setAssetStore:(CUIMutableCommonAssetStorage *)arg1 ;
-(void)setOutputPath:(NSString *)arg1 ;
-(NSString *)outputPath;
-(void)setAssetPackIdentifier:(NSString *)arg1 ;
-(BOOL)wasModified;
-(void)setWasModified:(BOOL)arg1 ;
@end

