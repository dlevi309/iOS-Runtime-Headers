/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setLeftText:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)rightText;
-(void)setRightText:(SAUIDecoratedText *)arg1 ;
@end

