/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUITemplateFont : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * size; 
@property (nonatomic,copy) NSString * textStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)font;
+(id)fontWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)size;
-(id)groupIdentifier;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setTextStyle:(NSString *)arg1 ;
-(NSString *)textStyle;
-(id)encodedClassName;
@end

