/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUIAssistantUtteranceView.h>

@class NSString;

@interface SAUIAssistantTipView : SAUIAssistantUtteranceView

@property (nonatomic,copy) NSString * flowIdentifier; 
@property (nonatomic,copy) NSString * tipPrefix; 
+(id)assistantTipView;
+(id)assistantTipViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)tipPrefix;
-(id)encodedClassName;
-(NSString *)flowIdentifier;
-(void)setFlowIdentifier:(NSString *)arg1 ;
-(void)setTipPrefix:(NSString *)arg1 ;
@end

