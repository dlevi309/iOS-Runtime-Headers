/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSUUID, NSDictionary, NSArray;

@interface ATXHomeScreenCachedSuggestions : NSObject <NSSecureCoding, ATXProtoBufWrapper> {

	NSUUID* _uuid;
	NSDictionary* _cachedSuggestionWidgetLayouts;
	NSDictionary* _cachedAppPredictionPanelLayouts;
	NSDictionary* _cachedStackLayouts;
	NSArray* _fallbackSuggestions;

}

@property (nonatomic,readonly) NSUUID * uuid;                                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedSuggestionWidgetLayouts;                //@synthesize cachedSuggestionWidgetLayouts=_cachedSuggestionWidgetLayouts - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedAppPredictionPanelLayouts;              //@synthesize cachedAppPredictionPanelLayouts=_cachedAppPredictionPanelLayouts - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedStackLayouts;                           //@synthesize cachedStackLayouts=_cachedStackLayouts - In the implementation block
@property (nonatomic,readonly) NSArray * fallbackSuggestions;                               //@synthesize fallbackSuggestions=_fallbackSuggestions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(id)descriptionWithoutPreviews;
-(NSUUID *)uuid;
-(id)proto;
-(id)init;
-(id)encodeAsProto;
-(id)_layoutDictionaryWithKeys:(id)arg1 protoLayouts:(id)arg2 ;
-(NSDictionary *)cachedStackLayouts;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_protoLayoutsFromLayoutDictionary:(id)arg1 orderedByKeys:(id)arg2 ;
-(NSArray *)fallbackSuggestions;
-(id)allSuggestionsInCachedSuggestions;
-(id)protoForBiome;
-(id)minSuggestionsInCachedSuggestionsWithoutPreviewsOrFallbacks;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 suggestionWidgetLayouts:(id)arg2 appPredictionPanelLayouts:(id)arg3 stackLayouts:(id)arg4 fallbackSuggestions:(id)arg5 ;
-(id)_jsonRawDataForWidgetLayoutMapping:(id)arg1 ;
-(NSDictionary *)cachedSuggestionWidgetLayouts;
-(NSDictionary *)cachedAppPredictionPanelLayouts;
-(BOOL)isEqual:(id)arg1 ;
-(id)jsonRawData;
@end

