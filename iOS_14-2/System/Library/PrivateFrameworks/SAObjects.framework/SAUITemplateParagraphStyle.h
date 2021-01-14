/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAUITemplateParagraphStyle : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSNumber * firstLineHeadIndent; 
@property (nonatomic,copy) NSNumber * getParagraphSpacingBefore; 
@property (nonatomic,copy) NSNumber * headIndent; 
@property (nonatomic,copy) NSNumber * lineHeightMultiple; 
@property (nonatomic,copy) NSNumber * lineSpacing; 
@property (nonatomic,copy) NSNumber * maximumLineHeight; 
@property (nonatomic,copy) NSNumber * minimumLineHeight; 
@property (nonatomic,copy) NSNumber * paragraphSpacing; 
@property (nonatomic,copy) NSNumber * tailIndent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paragraphStyleWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)paragraphStyle;
-(NSNumber *)headIndent;
-(id)groupIdentifier;
-(NSNumber *)tailIndent;
-(NSNumber *)lineHeightMultiple;
-(NSNumber *)paragraphSpacing;
-(void)setHeadIndent:(NSNumber *)arg1 ;
-(void)setTailIndent:(NSNumber *)arg1 ;
-(void)setLineHeightMultiple:(NSNumber *)arg1 ;
-(void)setParagraphSpacing:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSString *)alignment;
-(NSNumber *)firstLineHeadIndent;
-(void)setFirstLineHeadIndent:(NSNumber *)arg1 ;
-(NSNumber *)getParagraphSpacingBefore;
-(void)setGetParagraphSpacingBefore:(NSNumber *)arg1 ;
-(NSNumber *)lineSpacing;
-(void)setAlignment:(NSString *)arg1 ;
-(void)setLineSpacing:(NSNumber *)arg1 ;
-(NSNumber *)minimumLineHeight;
-(NSNumber *)maximumLineHeight;
-(void)setMinimumLineHeight:(NSNumber *)arg1 ;
-(void)setMaximumLineHeight:(NSNumber *)arg1 ;
@end

