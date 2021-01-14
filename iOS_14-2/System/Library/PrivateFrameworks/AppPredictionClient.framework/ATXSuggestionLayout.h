/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/ATXSuggestionLayoutProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSArray, NSString;

@interface ATXSuggestionLayout : NSObject <ATXProtoBufWrapper, ATXSuggestionLayoutProtocol, NSSecureCoding, NSCopying> {

	BOOL _isValidForSuggestionsWidget;
	BOOL _confidenceWarrantsSnappingOrNPlusOne;
	BOOL _isNPlusOne;
	BOOL _isLowConfidenceStackRotationForStaleStack;
	long long _layoutType;
	double _layoutScore;
	NSUUID* _uuid;
	NSUUID* _uuidOfHighestConfidenceSuggestion;
	NSArray* _oneByOneSuggestions;
	NSArray* _oneByTwoSuggestions;
	NSArray* _twoByTwoSuggestions;
	NSArray* _oneByFourSuggestions;
	NSArray* _twoByFourSuggestions;
	NSArray* _fourByFourSuggestions;
	NSString* _widgetUniqueId;
	unsigned long long _numWidgetsInStack;

}

@property (nonatomic,retain) NSArray * oneByOneSuggestions;                               //@synthesize oneByOneSuggestions=_oneByOneSuggestions - In the implementation block
@property (nonatomic,retain) NSArray * oneByTwoSuggestions;                               //@synthesize oneByTwoSuggestions=_oneByTwoSuggestions - In the implementation block
@property (nonatomic,retain) NSArray * twoByTwoSuggestions;                               //@synthesize twoByTwoSuggestions=_twoByTwoSuggestions - In the implementation block
@property (nonatomic,retain) NSArray * oneByFourSuggestions;                              //@synthesize oneByFourSuggestions=_oneByFourSuggestions - In the implementation block
@property (nonatomic,retain) NSArray * twoByFourSuggestions;                              //@synthesize twoByFourSuggestions=_twoByFourSuggestions - In the implementation block
@property (nonatomic,readonly) long long layoutType;                                      //@synthesize layoutType=_layoutType - In the implementation block
@property (assign,nonatomic) double layoutScore;                                          //@synthesize layoutScore=_layoutScore - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSUUID * uuidOfHighestConfidenceSuggestion;                  //@synthesize uuidOfHighestConfidenceSuggestion=_uuidOfHighestConfidenceSuggestion - In the implementation block
@property (nonatomic,readonly) NSArray * fourByFourSuggestions;                           //@synthesize fourByFourSuggestions=_fourByFourSuggestions - In the implementation block
@property (assign,nonatomic) BOOL isValidForSuggestionsWidget;                            //@synthesize isValidForSuggestionsWidget=_isValidForSuggestionsWidget - In the implementation block
@property (assign,nonatomic) BOOL confidenceWarrantsSnappingOrNPlusOne;                   //@synthesize confidenceWarrantsSnappingOrNPlusOne=_confidenceWarrantsSnappingOrNPlusOne - In the implementation block
@property (assign,nonatomic) BOOL isNPlusOne;                                             //@synthesize isNPlusOne=_isNPlusOne - In the implementation block
@property (nonatomic,retain) NSString * widgetUniqueId;                                   //@synthesize widgetUniqueId=_widgetUniqueId - In the implementation block
@property (assign,nonatomic) BOOL isLowConfidenceStackRotationForStaleStack;              //@synthesize isLowConfidenceStackRotationForStaleStack=_isLowConfidenceStackRotationForStaleStack - In the implementation block
@property (assign,nonatomic) unsigned long long numWidgetsInStack;                        //@synthesize numWidgetsInStack=_numWidgetsInStack - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)uiLayoutTypesForStackLayoutSize:(unsigned long long)arg1 ;
+(id)stringFromUILayoutType:(long long)arg1 ;
+(id)maxSuggestionLayoutTypesForUILayoutType:(long long)arg1 ;
+(id)minSuggestionLayoutTypesForUILayoutType:(long long)arg1 ;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(long long)layoutType;
-(NSArray *)twoByTwoSuggestions;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(NSUUID *)uuid;
-(void)setIsNPlusOne:(BOOL)arg1 ;
-(id)proto;
-(void)setNumWidgetsInStack:(unsigned long long)arg1 ;
-(void)setLayoutScore:(double)arg1 ;
-(BOOL)isNPlusOne;
-(id)encodeAsProto;
-(void)setOneByTwoSuggestions:(NSArray *)arg1 ;
-(void)setWidgetUniqueId:(NSString *)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)suggestionWithUUID:(id)arg1 ;
-(BOOL)confidenceWarrantsSnappingOrNPlusOne;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)numWidgetsInStack;
-(NSUUID *)uuidOfHighestConfidenceSuggestion;
-(void)setConfidenceWarrantsSnappingOrNPlusOne:(BOOL)arg1 ;
-(int)_protoLayoutTypeFromLayoutType:(long long)arg1 ;
-(void)setTwoByFourSuggestions:(NSArray *)arg1 ;
-(NSString *)description;
-(void)setIsLowConfidenceStackRotationForStaleStack:(BOOL)arg1 ;
-(id)minSuggestionListInLayout;
-(NSArray *)twoByFourSuggestions;
-(id)initWithLayoutType:(long long)arg1 oneByOneSuggestions:(id)arg2 oneByTwoSuggestions:(id)arg3 twoByTwoSuggestions:(id)arg4 oneByFourSuggestions:(id)arg5 twoByFourSuggestions:(id)arg6 fourByFourSuggestions:(id)arg7 uuid:(id)arg8 layoutScore:(double)arg9 isValidForSuggestionsWidget:(BOOL)arg10 confidenceWarrantsSnappingOrNPlusOne:(BOOL)arg11 isNPlusOne:(BOOL)arg12 isLowConfidenceStackRotationForStaleStack:(BOOL)arg13 widgetUniqueId:(id)arg14 uuidOfHighestConfidenceSuggestion:(id)arg15 numWidgetsInStack:(unsigned long long)arg16 ;
-(void)setUuidOfHighestConfidenceSuggestion:(NSUUID *)arg1 ;
-(long long)_layoutTypeFromProtoLayoutType:(int)arg1 ;
-(NSArray *)fourByFourSuggestions;
-(BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(id)arrayOfJSONFromSuggestionArray:(id)arg1 ;
-(BOOL)isValidForSuggestionsWidget;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(void)setOneByOneSuggestions:(NSArray *)arg1 ;
-(id)initWithLayoutType:(long long)arg1 oneByOneSuggestions:(id)arg2 oneByTwoSuggestions:(id)arg3 twoByTwoSuggestions:(id)arg4 oneByFourSuggestions:(id)arg5 twoByFourSuggestions:(id)arg6 fourByFourSuggestions:(id)arg7 ;
-(BOOL)isShortcutConversion;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setTwoByTwoSuggestions:(NSArray *)arg1 ;
-(NSArray *)oneByTwoSuggestions;
-(id)initWithLayoutType:(long long)arg1 oneByOneSuggestions:(id)arg2 oneByTwoSuggestions:(id)arg3 twoByTwoSuggestions:(id)arg4 oneByFourSuggestions:(id)arg5 twoByFourSuggestions:(id)arg6 fourByFourSuggestions:(id)arg7 uuid:(id)arg8 ;
-(BOOL)isLowConfidenceStackRotationForStaleStack;
-(double)layoutScore;
-(NSArray *)oneByOneSuggestions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allSuggestionsInLayout;
-(void)setIsValidForSuggestionsWidget:(BOOL)arg1 ;
-(NSArray *)oneByFourSuggestions;
-(BOOL)isEqual:(id)arg1 ;
-(id)jsonRawData;
-(NSString *)widgetUniqueId;
-(void)setOneByFourSuggestions:(NSArray *)arg1 ;
@end

