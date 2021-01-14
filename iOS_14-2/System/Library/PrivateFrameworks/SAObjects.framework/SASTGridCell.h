/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIDecoratedText, NSString;

@interface SASTGridCell : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIDecoratedText * subTitle; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gridCellWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)gridCell;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)subTitle;
-(void)setSubTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)title;
@end

