/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSString, ATXHomeScreenWidgetIdentifiable, ATXProactiveSuggestion;

@interface ATXHomeScreenStackSuggestion : NSObject {

	BOOL _isAlreadyInStack;
	BOOL _isLowConfidenceStackRotationForStaleStack;
	NSString* _stackId;
	ATXHomeScreenWidgetIdentifiable* _widget;
	NSString* _suggestionIdentifier;
	ATXProactiveSuggestion* _proactiveSuggestion;

}

@property (nonatomic,copy) NSString * suggestionIdentifier;                               //@synthesize suggestionIdentifier=_suggestionIdentifier - In the implementation block
@property (nonatomic,retain) ATXProactiveSuggestion * proactiveSuggestion;                //@synthesize proactiveSuggestion=_proactiveSuggestion - In the implementation block
@property (assign,nonatomic) BOOL isLowConfidenceStackRotationForStaleStack;              //@synthesize isLowConfidenceStackRotationForStaleStack=_isLowConfidenceStackRotationForStaleStack - In the implementation block
@property (nonatomic,copy) NSString * stackId;                                            //@synthesize stackId=_stackId - In the implementation block
@property (nonatomic,retain) ATXHomeScreenWidgetIdentifiable * widget;                    //@synthesize widget=_widget - In the implementation block
@property (assign,nonatomic) BOOL isAlreadyInStack;                                       //@synthesize isAlreadyInStack=_isAlreadyInStack - In the implementation block
@property (nonatomic,readonly) BOOL isSuggestionWidget; 
-(id)dictionaryRepresentation;
-(ATXProactiveSuggestion *)proactiveSuggestion;
-(ATXHomeScreenWidgetIdentifiable *)widget;
-(id)description;
-(NSString *)stackId;
-(void)setIsLowConfidenceStackRotationForStaleStack:(BOOL)arg1 ;
-(void)setWidget:(ATXHomeScreenWidgetIdentifiable *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isLowConfidenceStackRotationForStaleStack;
-(NSString *)suggestionIdentifier;
-(void)setSuggestionIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setProactiveSuggestion:(ATXProactiveSuggestion *)arg1 ;
-(BOOL)isSuggestionWidget;
-(void)setStackId:(NSString *)arg1 ;
-(void)setIsAlreadyInStack:(BOOL)arg1 ;
-(BOOL)isAlreadyInStack;
@end

