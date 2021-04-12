/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIDecoratedText, NSString, SAUIAppPunchOut, NSNumber;

@interface SAGKAnswerProperty : AceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValue; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValueAnnotation; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSNumber * selected; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * valueAnnotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)answerProperty;
+(id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)decoratedValueAnnotation;
-(void)setDecoratedValueAnnotation:(SAUIDecoratedText *)arg1 ;
-(SAUIAppPunchOut *)punchOut;
-(void)setSelected:(NSNumber *)arg1 ;
-(NSNumber *)selected;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSString *)valueAnnotation;
-(void)setValueAnnotation:(NSString *)arg1 ;
-(SAUIDecoratedText *)decoratedValue;
-(void)setDecoratedValue:(SAUIDecoratedText *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id<SAClientBoundCommand>)command;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
-(NSString *)value;
@end

