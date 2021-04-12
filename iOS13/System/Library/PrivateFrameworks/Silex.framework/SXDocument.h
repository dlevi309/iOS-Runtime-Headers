/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray, SXMetaData, SXJSONDictionary, SXDocumentStyle;

@interface SXDocument : SXJSONObject {

	NSString* _identifier;

}

@property (nonatomic,readonly) SXJSONArray * allComponents; 
@property (nonatomic,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) SXMetaData * metadata; 
@property (nonatomic,readonly) NSString * specVersion; 
@property (nonatomic,readonly) SXJSONArray * components; 
@property (nonatomic,readonly) SXJSONDictionary * resources; 
@property (nonatomic,readonly) SXJSONDictionary * componentStyles; 
@property (nonatomic,readonly) SXJSONDictionary * textStyles; 
@property (nonatomic,readonly) SXJSONDictionary * componentTextStyles; 
@property (nonatomic,readonly) SXJSONDictionary * componentLayouts; 
@property (nonatomic,readonly) id<SXDocumentLayout> layout; 
@property (nonatomic,readonly) SXDocumentStyle * documentStyle; 
@property (nonatomic,readonly) id<SXAdvertisingSettings> advertisingSettings; 
@property (nonatomic,readonly) id<SXAutoPlacement> autoplacement; 
@property (nonatomic,readonly) id<SXHints> hints; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
+(/*^block*/id)objectValueClassBlockForPropertyWithName:(id)arg1 ;
+(/*^block*/id)purgeClassBlockForPropertyWithName:(id)arg1 ;
-(id<SXHints>)hints;
-(id<SXAutoPlacement>)autoplacement;
-(id<SXAdvertisingSettings>)advertisingSettings;
-(SXDocumentStyle *)documentStyle;
-(id<SXDocumentLayout>)layout;
-(SXJSONDictionary *)componentLayouts;
-(SXJSONDictionary *)componentTextStyles;
-(SXJSONDictionary *)textStyles;
-(SXJSONDictionary *)componentStyles;
-(SXJSONDictionary *)resources;
-(SXJSONArray *)components;
-(NSString *)specVersion;
-(SXMetaData *)metadata;
-(NSString *)language;
-(NSString *)title;
-(SXJSONArray *)allComponents;
-(NSString *)identifier;
-(id)initWithJSONObject:(id)arg1 andVersion:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 JSONObject:(id)arg2 andVersion:(id)arg3 ;
@end

