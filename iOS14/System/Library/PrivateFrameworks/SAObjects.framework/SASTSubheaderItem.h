/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTSubheaderItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * leftText; 
@property (nonatomic,retain) SAUIDecoratedText * rightText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)subheaderItem;
+(id)subheaderItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)leftText;
-(void)setRightText:(SAUIDecoratedText *)arg1 ;
-(void)setLeftText:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)rightText;
@end

