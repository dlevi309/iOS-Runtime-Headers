/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/AFAceCommandDialogInfoExtracting.h>
#import <SAObjects/SAConditionallyMutatingClientBoundCommand.h>

@class NSString, SASendCommands, NSArray;

@interface SAUIAddViews : SABaseClientBoundCommand <AFAceCommandDialogInfoExtracting, SAConditionallyMutatingClientBoundCommand>

@property (nonatomic,copy) NSString * dialogPhase; 
@property (nonatomic,copy) NSString * displayTarget; 
@property (assign,nonatomic) BOOL mutatingCommand; 
@property (nonatomic,retain) SASendCommands * refreshCommand; 
@property (assign,nonatomic) BOOL requiresResponse; 
@property (assign,nonatomic) BOOL scrollToTop; 
@property (assign,nonatomic) BOOL temporary; 
@property (nonatomic,copy) NSArray * views; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)addViews;
+(id)addViewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_dialogPhase;
-(void)_af_extractDialogInfo:(/*^block*/id)arg1 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)groupIdentifier;
-(NSArray *)views;
-(BOOL)scrollToTop;
-(id)encodedClassName;
-(NSString *)dialogPhase;
-(void)setDialogPhase:(NSString *)arg1 ;
-(void)setDisplayTarget:(NSString *)arg1 ;
-(void)setViews:(NSArray *)arg1 ;
-(void)setTemporary:(BOOL)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setMutatingCommand:(BOOL)arg1 ;
-(NSString *)displayTarget;
-(SASendCommands *)refreshCommand;
-(void)setRefreshCommand:(SASendCommands *)arg1 ;
-(void)setRequiresResponse:(BOOL)arg1 ;
-(void)setScrollToTop:(BOOL)arg1 ;
-(BOOL)temporary;
@end

