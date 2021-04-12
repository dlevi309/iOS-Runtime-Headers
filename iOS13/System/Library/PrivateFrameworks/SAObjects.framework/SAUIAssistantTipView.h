/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)encodedClassName;
-(NSString *)flowIdentifier;
-(void)setFlowIdentifier:(NSString *)arg1 ;
-(NSString *)tipPrefix;
-(void)setTipPrefix:(NSString *)arg1 ;
@end

