/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIAddViews;

@interface SAARAlternativeResultsView : SAAceView

@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,retain) SAUIAddViews * resultView; 
@property (assign,nonatomic) BOOL suggestedResult; 
@property (nonatomic,copy) NSString * utterance; 
+(id)alternativeResultsView;
+(id)alternativeResultsViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(void)setRank:(long long)arg1 ;
-(id)groupIdentifier;
-(NSString *)utterance;
-(id)encodedClassName;
-(void)setUtterance:(NSString *)arg1 ;
-(SAUIAddViews *)resultView;
-(void)setResultView:(SAUIAddViews *)arg1 ;
-(BOOL)suggestedResult;
-(void)setSuggestedResult:(BOOL)arg1 ;
-(long long)rank;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogIdentifier;
@end

