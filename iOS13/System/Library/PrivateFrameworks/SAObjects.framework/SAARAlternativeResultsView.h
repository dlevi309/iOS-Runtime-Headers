/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogIdentifier;
-(SAUIAddViews *)resultView;
-(void)setResultView:(SAUIAddViews *)arg1 ;
-(BOOL)suggestedResult;
-(void)setSuggestedResult:(BOOL)arg1 ;
@end

