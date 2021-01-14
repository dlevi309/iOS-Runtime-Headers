/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(NSArray *)communicationOptions;
-(void)setCommunicationOptions:(NSArray *)arg1 ;
-(SAUITemplateEdgeInsets *)fullScreenPaddingDelta;
-(void)setFullScreenPaddingDelta:(SAUITemplateEdgeInsets *)arg1 ;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(BOOL)shouldBeOffscreenInPartial;
-(void)setShouldBeOffscreenInPartial:(BOOL)arg1 ;
-(NSArray *)presentationOptions;
-(void)setPresentationOptions:(NSArray *)arg1 ;
-(SAUITemplateEdgeInsets *)padding;
-(void)setPadding:(SAUITemplateEdgeInsets *)arg1 ;
@end

