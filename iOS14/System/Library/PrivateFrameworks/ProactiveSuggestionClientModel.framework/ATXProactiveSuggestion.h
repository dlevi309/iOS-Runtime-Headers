/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, ATXProactiveSuggestionClientModelSpecification, ATXProactiveSuggestionExecutableSpecification, ATXProactiveSuggestionUISpecification, ATXProactiveSuggestionScoreSpecification, ATXInfoSuggestion, NSString, NSDate, INIntent, NSDictionary;

@interface ATXProactiveSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying> {

	unsigned long long _hash;
	NSUUID* _uuid;
	ATXProactiveSuggestionClientModelSpecification* _clientModelSpecification;
	ATXProactiveSuggestionExecutableSpecification* _executableSpecification;
	ATXProactiveSuggestionUISpecification* _uiSpecification;
	ATXProactiveSuggestionScoreSpecification* _scoreSpecification;
	ATXInfoSuggestion* _infoSuggestion;

}

@property (nonatomic,readonly) NSString * appBundleIdentifier; 
@property (nonatomic,readonly) NSString * widgetBundleIdentifier; 
@property (nonatomic,readonly) NSString * criterion; 
@property (nonatomic,readonly) unsigned long long applicableLayouts; 
@property (nonatomic,readonly) NSString * suggestionIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) INIntent * intent; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,retain) ATXInfoSuggestion * infoSuggestion;                                                       //@synthesize infoSuggestion=_infoSuggestion - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) ATXProactiveSuggestionClientModelSpecification * clientModelSpecification;              //@synthesize clientModelSpecification=_clientModelSpecification - In the implementation block
@property (nonatomic,readonly) ATXProactiveSuggestionExecutableSpecification * executableSpecification;                //@synthesize executableSpecification=_executableSpecification - In the implementation block
@property (nonatomic,readonly) ATXProactiveSuggestionUISpecification * uiSpecification;                                //@synthesize uiSpecification=_uiSpecification - In the implementation block
@property (nonatomic,readonly) ATXProactiveSuggestionScoreSpecification * scoreSpecification;                          //@synthesize scoreSpecification=_scoreSpecification - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)suggestionsFromProtoSuggestions:(id)arg1 ;
+(id)protoSuggestionsFromSuggestions:(id)arg1 ;
+(BOOL)suggestionsHaveChangedFromPreviousSuggestions:(id)arg1 newSuggestions:(id)arg2 ;
-(id)initWithProto:(id)arg1 ;
-(INIntent *)intent;
-(id)initWithProtoData:(id)arg1 ;
-(NSDate *)endDate;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(NSUUID *)uuid;
-(id)proto;
-(id)encodeAsProto;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)widgetBundleIdentifier;
-(BOOL)isValidForSuggestionsWidget;
-(NSString *)suggestionIdentifier;
-(NSDictionary *)metadata;
-(NSString *)criterion;
-(void)setInfoSuggestion:(ATXInfoSuggestion *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ATXInfoSuggestion *)infoSuggestion;
-(unsigned long long)applicableLayouts;
-(id)initWithClientModelSpecification:(id)arg1 executableSpecification:(id)arg2 uiSpecification:(id)arg3 scoreSpecification:(id)arg4 ;
-(ATXProactiveSuggestionExecutableSpecification *)executableSpecification;
-(ATXProactiveSuggestionUISpecification *)uiSpecification;
-(ATXProactiveSuggestionClientModelSpecification *)clientModelSpecification;
-(ATXProactiveSuggestionScoreSpecification *)scoreSpecification;
-(BOOL)fuzzyIsEqualToProactiveSuggestion:(id)arg1 ;
-(id)initWithClientModelSpecification:(id)arg1 executableSpecification:(id)arg2 uiSpecification:(id)arg3 scoreSpecification:(id)arg4 uuid:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)jsonRawData;
@end

