/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SADecoratedString;

@interface SASTBodyTextItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSString * bodyText; 
@property (nonatomic,retain) SADecoratedString * decoratedBodyText; 
@property (nonatomic,copy) NSString * position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bodyTextItem;
+(id)bodyTextItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)position;
-(id)groupIdentifier;
-(NSString *)bodyText;
-(id)encodedClassName;
-(NSString *)alignment;
-(void)setAlignment:(NSString *)arg1 ;
-(void)setBodyText:(NSString *)arg1 ;
-(void)setPosition:(NSString *)arg1 ;
-(SADecoratedString *)decoratedBodyText;
-(void)setDecoratedBodyText:(SADecoratedString *)arg1 ;
@end

