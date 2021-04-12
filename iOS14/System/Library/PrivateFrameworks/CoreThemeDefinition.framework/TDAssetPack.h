/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)tags;
-(void)setAssetStore:(CUIMutableCommonAssetStorage *)arg1 ;
-(CUIMutableCommonAssetStorage *)assetStore;
-(void)setTags:(NSSet *)arg1 ;
-(unsigned long long)hash;
-(NSString *)assetPackIdentifier;
-(void)setOutputPath:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)outputPath;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setAssetPackIdentifier:(NSString *)arg1 ;
-(BOOL)wasModified;
-(void)setWasModified:(BOOL)arg1 ;
@end

