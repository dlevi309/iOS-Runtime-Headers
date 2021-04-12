/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSString, NSMutableDictionary;

@interface SKUIScreenshot : NSObject <NSCopying, SKUICacheCoding> {

	NSString* _orientation;
	long long _uniqueIdentifier;
	NSMutableDictionary* _urls;
	NSMutableDictionary* _sizes;
	NSString* _urlTemplate;

}

@property (nonatomic,readonly) long long numberOfVariants; 
@property (nonatomic,readonly) NSString * orientationString;                           //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) long long uniqueIdentifier;                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)uniqueIdentifier;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(void)setArtwork:(id)arg1 forVariant:(id)arg2 ;
-(long long)numberOfVariants;
-(id)_initSKUIScreenshot;
-(void)_addURLsFromDictionary:(id)arg1 withRemoteLocalKeysMap:(id)arg2 ;
-(id)_firstVariant;
-(id)initWithScreenshotDictionary:(id)arg1 ;
-(CGSize)sizeForVariant:(id)arg1 ;
-(id)URLForVariant:(id)arg1 ;
-(NSString *)orientationString;
@end

