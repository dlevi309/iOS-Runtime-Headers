/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/AFAceCommandClientFeedbackEnumerating.h>
#import <SAObjects/SAConditionallyMutatingClientBoundCommand.h>

@class NSString, SASendCommands, NSArray;

@interface SAUIAddViews : SABaseClientBoundCommand <AFAceCommandClientFeedbackEnumerating, SAConditionallyMutatingClientBoundCommand>

@property (nonatomic,copy) NSString * dialogPhase; 
@property (nonatomic,copy) NSString * displayTarget; 
@property (assign,nonatomic) BOOL immersiveExperience; 
@property (assign,nonatomic) BOOL mutatingCommand; 
@property (nonatomic,retain) SASendCommands * refreshCommand; 
@property (assign,nonatomic) BOOL requiresResponse; 
@property (assign,nonatomic) BOOL scrollToTop; 
@property (assign,nonatomic) BOOL supplemental; 
@property (assign,nonatomic) BOOL temporary; 
@property (nonatomic,copy) NSArray * views; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)addViewsWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)addViews;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)af_dialogPhase;
-(void)_af_enumerateClientFeedbackDetails:(/*^block*/id)arg1 ;
-(id)groupIdentifier;
-(void)setTemporary:(BOOL)arg1 ;
-(BOOL)supplemental;
-(BOOL)immersiveExperience;
-(void)setViews:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)displayTarget;
-(SASendCommands *)refreshCommand;
-(void)setRefreshCommand:(SASendCommands *)arg1 ;
-(void)setRequiresResponse:(BOOL)arg1 ;
-(void)setScrollToTop:(BOOL)arg1 ;
-(BOOL)temporary;
-(NSString *)dialogPhase;
-(BOOL)scrollToTop;
-(void)setDialogPhase:(NSString *)arg1 ;
-(void)setSupplemental:(BOOL)arg1 ;
-(void)setImmersiveExperience:(BOOL)arg1 ;
-(BOOL)mutatingCommand;
-(void)setMutatingCommand:(BOOL)arg1 ;
-(void)setDisplayTarget:(NSString *)arg1 ;
-(NSArray *)views;
@end

