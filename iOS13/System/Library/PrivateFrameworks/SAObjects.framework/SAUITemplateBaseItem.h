/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAUITemplateItem.h>

@class NSArray, SAUITemplateEdgeInsets, NSString;

@interface SAUITemplateBaseItem : SABaseAceObject <SAUITemplateItem>

@property (nonatomic,copy) NSArray * communicationOptions; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * fullScreenPaddingDelta; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * padding; 
@property (nonatomic,copy) NSArray * presentationOptions; 
@property (assign,nonatomic) BOOL shouldBeOffscreenInPartial; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)baseItem;
+(id)baseItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPadding:(SAUITemplateEdgeInsets *)arg1 ;
-(SAUITemplateEdgeInsets *)padding;
-(id)encodedClassName;
-(void)setPresentationOptions:(NSArray *)arg1 ;
-(NSArray *)presentationOptions;
-(NSArray *)communicationOptions;
-(void)setCommunicationOptions:(NSArray *)arg1 ;
-(SAUITemplateEdgeInsets *)fullScreenPaddingDelta;
-(void)setFullScreenPaddingDelta:(SAUITemplateEdgeInsets *)arg1 ;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(BOOL)shouldBeOffscreenInPartial;
-(void)setShouldBeOffscreenInPartial:(BOOL)arg1 ;
@end

