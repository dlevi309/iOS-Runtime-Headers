/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/ATXSuggestionExecutableProtocol.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/ATXMemoryPressureObserver.h>

@class NSData, INIntent, NSString, NSNumber, NSDate, ATXCustomIntentDescription, NSDictionary;

@interface ATXInfoSuggestion : NSObject <NSSecureCoding, NSCopying, ATXSuggestionExecutableProtocol, ATXProtoBufWrapper, ATXMemoryPressureObserver> {

	NSData* _intentProtoData;
	INIntent* _intent;
	NSString* _appBundleIdentifier;
	NSString* _widgetBundleIdentifier;
	NSString* _widgetKind;
	NSString* _criterion;
	long long _confidenceLevel;
	NSNumber* _relevanceScore;
	unsigned long long _layouts;
	NSString* _suggestionIdentifier;
	NSString* _sourceIdentifier;
	NSString* _clientModelId;
	NSDate* _startDate;
	NSDate* _endDate;
	ATXCustomIntentDescription* _intentDescription;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) NSString * appBundleIdentifier;                              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * widgetBundleIdentifier;                           //@synthesize widgetBundleIdentifier=_widgetBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * widgetKind;                                           //@synthesize widgetKind=_widgetKind - In the implementation block
@property (nonatomic,readonly) NSString * criterion;                                        //@synthesize criterion=_criterion - In the implementation block
@property (assign,nonatomic) long long confidenceLevel;                                     //@synthesize confidenceLevel=_confidenceLevel - In the implementation block
@property (nonatomic,readonly) NSNumber * relevanceScore;                                   //@synthesize relevanceScore=_relevanceScore - In the implementation block
@property (nonatomic,readonly) unsigned long long layouts;                                  //@synthesize layouts=_layouts - In the implementation block
@property (nonatomic,copy) NSString * suggestionIdentifier;                                 //@synthesize suggestionIdentifier=_suggestionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceIdentifier;                                     //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientModelId;                                        //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) ATXCustomIntentDescription * intentDescription;              //@synthesize intentDescription=_intentDescription - In the implementation block
@property (nonatomic,copy,readonly) INIntent * intent; 
@property (nonatomic,copy,readonly) NSDictionary * metadata;                                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL isFallback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)proactiveSuggestionForInfoSuggestion:(id)arg1 withClientModelId:(id)arg2 clientModelVersion:(id)arg3 rawScore:(double)arg4 confidenceCategory:(long long)arg5 ;
+(id)_uiSpecForInfoSuggestion:(id)arg1 ;
+(id)_executableSpecificationForInfoSuggestion:(id)arg1 ;
-(id)initWithProto:(id)arg1 ;
-(INIntent *)intent;
-(id)initWithProtoData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)clientModelId;
-(ATXCustomIntentDescription *)intentDescription;
-(NSDate *)endDate;
-(id)proto;
-(NSString *)widgetKind;
-(id)init;
-(id)encodeAsProto;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)_verifyAndReturnDecodedObject:(id)arg1 ofClass:(Class)arg2 forKey:(id)arg3 withCoder:(id)arg4 ;
-(id)initWithData:(id)arg1 ;
-(id)_safeDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2 withCoder:(id)arg3 ;
-(NSNumber *)relevanceScore;
-(NSString *)description;
-(id)initWithAppBundleIdentifier:(id)arg1 widgetBundleIdentifier:(id)arg2 widgetKind:(id)arg3 criterion:(id)arg4 applicableLayouts:(unsigned long long)arg5 suggestionIdentifier:(id)arg6 startDate:(id)arg7 endDate:(id)arg8 intentDescription:(id)arg9 metadata:(id)arg10 relevanceScore:(id)arg11 ;
-(id)_initWithAppBundleIdentifier:(id)arg1 widgetBundleIdentifier:(id)arg2 widgetKind:(id)arg3 criterion:(id)arg4 applicableLayouts:(unsigned long long)arg5 suggestionIdentifier:(id)arg6 startDate:(id)arg7 endDate:(id)arg8 intent:(id)arg9 intentDescription:(id)arg10 metadata:(id)arg11 relevanceScore:(id)arg12 ;
-(id)data;
-(unsigned long long)layouts;
-(BOOL)isEqualToATXInfoSuggestion:(id)arg1 ;
-(void)setWidgetKind:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)widgetBundleIdentifier;
-(BOOL)isFallback;
-(void)setClientModelId:(NSString *)arg1 ;
-(id)initWithProactiveSuggestion:(id)arg1 ;
-(id)initWithAppBundleIdentifier:(id)arg1 widgetBundleIdentifier:(id)arg2 widgetKind:(id)arg3 criterion:(id)arg4 applicableLayouts:(unsigned long long)arg5 suggestionIdentifier:(id)arg6 startDate:(id)arg7 endDate:(id)arg8 intent:(id)arg9 metadata:(id)arg10 relevanceScore:(id)arg11 ;
-(long long)confidenceLevel;
-(NSString *)suggestionIdentifier;
-(id)_safeDecodeObjectOfClass:(Class)arg1 allowedClasses:(id)arg2 forKey:(id)arg3 withCoder:(id)arg4 ;
-(NSDictionary *)metadata;
-(void)setSuggestionIdentifier:(NSString *)arg1 ;
-(NSString *)criterion;
-(void)handleMemoryPressure;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)sourceIdentifier;
-(void)setConfidenceLevel:(long long)arg1 ;
@end

