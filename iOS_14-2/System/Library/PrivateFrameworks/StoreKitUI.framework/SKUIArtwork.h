/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)width;
-(CGSize)size;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)_lookupDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)height;
-(NSString *)description;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(id)initWithURL:(id)arg1 size:(CGSize)arg2 ;
@end

