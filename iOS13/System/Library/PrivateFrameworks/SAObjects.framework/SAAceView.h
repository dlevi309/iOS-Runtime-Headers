/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>
#import <libobjc.A.dylib/AFAceCommandDialogInfoExtracting.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSDictionary, NSString;

@interface SAAceView : SABaseAceObject <AFAceCommandDialogInfoExtracting, SAAceSerializable>

@property (assign,nonatomic) BOOL canBeRefreshed; 
@property (assign,nonatomic) BOOL canUseServerTTS; 
@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSNumber * deferredRendering; 
@property (assign,nonatomic) BOOL isTransient; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (nonatomic,copy) NSString * speakableText; 
@property (nonatomic,copy) NSString * viewId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceView;
+(id)aceViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)_af_extractDialogInfo:(/*^block*/id)arg1 ;
-(id)_af_dialogPhase;
-(id)_af_dialogIdentifier;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id<SAAceSerializable>)context;
-(id)groupIdentifier;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(BOOL)isTransient;
-(NSString *)speakableText;
-(id)encodedClassName;
-(void)setSpeakableText:(NSString *)arg1 ;
-(NSString *)viewId;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(void)setViewId:(NSString *)arg1 ;
-(BOOL)canUseServerTTS;
-(NSNumber *)listenAfterSpeaking;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(BOOL)canBeRefreshed;
-(void)setCanBeRefreshed:(BOOL)arg1 ;
-(NSNumber *)deferredRendering;
-(void)setDeferredRendering:(NSNumber *)arg1 ;
-(void)setIsTransient:(BOOL)arg1 ;
@end

