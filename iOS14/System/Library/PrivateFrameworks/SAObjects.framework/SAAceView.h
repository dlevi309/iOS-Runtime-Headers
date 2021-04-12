/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>
#import <libobjc.A.dylib/AFAceCommandClientFeedbackEnumerating.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, SADialog, NSString, SAUIListenAfterSpeakingBehavior, NSDictionary;

@interface SAAceView : SABaseAceObject <AFAceCommandClientFeedbackEnumerating, SAAceSerializable>

@property (assign,nonatomic) BOOL canBeRefreshed; 
@property (assign,nonatomic) BOOL canUseServerTTS; 
@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSNumber * deferredRendering; 
@property (nonatomic,retain) SADialog * dialog; 
@property (assign,nonatomic) BOOL isTransient; 
@property (nonatomic,copy) NSString * itemType; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,retain) SAUIListenAfterSpeakingBehavior * listenAfterSpeakingBehavior; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (nonatomic,copy) NSString * speakableText; 
@property (nonatomic,copy) NSString * viewId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceViewWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)aceView;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)_af_dialogIdentifier;
-(void)_af_enumerateClientFeedbackDetails:(/*^block*/id)arg1 ;
-(id)_af_dialogPhase;
-(BOOL)isTransient;
-(id)groupIdentifier;
-(SADialog *)dialog;
-(BOOL)canBeRefreshed;
-(void)setCanBeRefreshed:(BOOL)arg1 ;
-(NSNumber *)deferredRendering;
-(void)setDeferredRendering:(NSNumber *)arg1 ;
-(void)setIsTransient:(BOOL)arg1 ;
-(id)encodedClassName;
-(NSString *)speakableText;
-(void)setSpeakableText:(NSString *)arg1 ;
-(id<SAAceSerializable>)context;
-(BOOL)canUseServerTTS;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(SAUIListenAfterSpeakingBehavior *)listenAfterSpeakingBehavior;
-(void)setItemType:(NSString *)arg1 ;
-(void)setListenAfterSpeakingBehavior:(SAUIListenAfterSpeakingBehavior *)arg1 ;
-(NSString *)viewId;
-(NSString *)itemType;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(void)setViewId:(NSString *)arg1 ;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(void)setDialog:(SADialog *)arg1 ;
-(NSNumber *)listenAfterSpeaking;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
@end

