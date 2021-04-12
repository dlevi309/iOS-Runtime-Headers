/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)inflectWordCommand;
+(id)inflectWordCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(NSArray *)constraints;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)defaultToSemantic;
-(void)setDefaultToSemantic:(BOOL)arg1 ;
-(NSString *)semanticFeatureName;
-(void)setSemanticFeatureName:(NSString *)arg1 ;
@end

