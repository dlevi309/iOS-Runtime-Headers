/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class SAUIButton, SAUIAssistantUtteranceView;

@interface SAUIDialogPunchout : SAAceView

@property (nonatomic,retain) SAUIButton * buttonView; 
@property (nonatomic,retain) SAUIAssistantUtteranceView * utteranceView; 
+(id)dialogPunchout;
+(id)dialogPunchoutWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_af_dialogIdentifier;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAssistantUtteranceView *)utteranceView;
-(SAUIButton *)buttonView;
-(void)setButtonView:(SAUIButton *)arg1 ;
-(void)setUtteranceView:(SAUIAssistantUtteranceView *)arg1 ;
@end

