/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUICacheCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSMutableDictionary;

@interface SKUIArtwork : NSObject <SKUICacheCoding, NSSecureCoding> {

	long long _height;
	NSURL* _url;
	NSString* _urlString;
	long long _width;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) long long height;                                       //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) long long width;                                        //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(NSURL *)URL;
-(long long)width;
-(long long)height;
-(id)_lookupDictionary;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(id)initWithURL:(id)arg1 size:(CGSize)arg2 ;
@end

