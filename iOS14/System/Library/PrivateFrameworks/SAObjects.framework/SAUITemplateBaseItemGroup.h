/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUITemplateBaseItem.h>
#import <SAObjects/SAUITemplateItemGroup.h>

@class NSArray, SAUITemplateEdgeInsets, NSString;

@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem <SAUITemplateItemGroup>

@property (nonatomic,copy) NSArray * templateItems; 
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
+(id)baseItemGroup;
+(id)baseItemGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)templateItems;
-(void)setTemplateItems:(NSArray *)arg1 ;
@end

