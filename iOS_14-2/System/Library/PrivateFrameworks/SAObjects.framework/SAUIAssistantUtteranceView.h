/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSString, NSNumber;

@interface SAUIAssistantUtteranceView : SAAceView

@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (nonatomic,copy) NSNumber * postDialogDelayInMilliseconds; 
@property (nonatomic,copy) NSString * text; 
+(id)assistantUtteranceView;
+(id)assistantUtteranceViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)af_text;
-(id)af_dialogIdentifier;
-(id)af_speakableText;
-(id)_af_dialogIdentifier;
-(BOOL)af_isUtterance;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setText:(NSString *)arg1 ;
-(NSNumber *)postDialogDelayInMilliseconds;
-(void)setPostDialogDelayInMilliseconds:(NSNumber *)arg1 ;
-(NSString *)text;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogIdentifier;
@end

