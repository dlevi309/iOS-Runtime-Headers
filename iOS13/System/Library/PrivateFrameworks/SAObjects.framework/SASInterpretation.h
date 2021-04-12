/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)interpretation;
+(id)interpretationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_speechTokens;
-(id)groupIdentifier;
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)doNotDedup;
-(void)setDoNotDedup:(BOOL)arg1 ;
@end

