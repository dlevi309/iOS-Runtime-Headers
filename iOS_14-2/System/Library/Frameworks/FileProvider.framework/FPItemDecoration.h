/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


#import <FileProvider/FileProvider-Structs.h>
@class NSString, NSArray;

@interface FPItemDecoration : NSObject {

	NSString* _decorationIdentifier;
	NSString* _labelFormat;
	NSArray* _labelKeys;
	NSString* _type;
	NSString* _imageType;
	NSString* _bundleIdentifier;
	BOOL _dependsOnParent;
	BOOL _dependsOnStyle;

}

@property (nonatomic,copy,readonly) NSString * decorationIdentifier;              //@synthesize decorationIdentifier=_decorationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageType;                         //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) BOOL requiresFetchingInfoFirst; 
+(void)initialize;
+(id)decorationWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)_loadDecorationsFromPlist:(id)arg1 bundleIdentifier:(id)arg2 bundle:(CFBundleRef)arg3 ;
+(id)_decorationCache;
+(void)_loadBuiltinDecorationTypes;
+(id)_fetchFromCacheWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
+(void)fetchInfoForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)infoForItem:(id)arg1 parentInfo:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(id)initWithPlistEntry:(id)arg1 bundle:(CFBundleRef)arg2 bundleIdentifier:(id)arg3 ;
-(NSString *)decorationIdentifier;
-(id)parentDependingKeys;
-(id)styleDependingKeys;
-(id)labelWithItem:(id)arg1 error:(id*)arg2 style:(unsigned long long)arg3 ;
-(id)labelWithInfo:(id)arg1 error:(id*)arg2 ;
-(id)labelWithInfo:(id)arg1 error:(id*)arg2 style:(unsigned long long)arg3 ;
-(BOOL)requiresFetchingInfoFirst;
-(id)labelWithItem:(id)arg1 error:(id*)arg2 ;
-(id)labelsWithInfo:(id)arg1 error:(id*)arg2 ;
-(id)labelsWithItem:(id)arg1 error:(id*)arg2 ;
-(void)folderStatusForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)description;
-(NSString *)type;
-(NSString *)imageType;
@end

