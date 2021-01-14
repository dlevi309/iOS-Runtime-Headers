/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SADialogInflectWordCommand : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * constraints; 
@property (assign,nonatomic) BOOL defaultToSemantic; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSString * semanticFeatureName; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inflectWordCommand;
+(id)inflectWordCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(NSString *)locale;
-(id)groupIdentifier;
-(void)setLocale:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)defaultToSemantic;
-(void)setDefaultToSemantic:(BOOL)arg1 ;
-(NSString *)semanticFeatureName;
-(void)setSemanticFeatureName:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)value;
@end

