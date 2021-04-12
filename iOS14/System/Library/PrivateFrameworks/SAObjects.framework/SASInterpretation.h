/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASInterpretation : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL doNotDedup; 
@property (nonatomic,copy) NSArray * tokens; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interpretationWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)interpretation;
-(id)af_speechTokens;
-(void)setTokens:(NSArray *)arg1 ;
-(NSArray *)tokens;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)doNotDedup;
-(void)setDoNotDedup:(BOOL)arg1 ;
@end

