/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAIntentGroupSiriKitParameterMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * confirmationStates; 
@property (nonatomic,copy) NSString * parameterName; 
@property (assign,nonatomic) BOOL shouldResolve; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitParameterMetadata;
+(id)siriKitParameterMetadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)confirmationStates;
-(void)setConfirmationStates:(NSArray *)arg1 ;
-(NSString *)parameterName;
-(void)setParameterName:(NSString *)arg1 ;
-(BOOL)shouldResolve;
-(void)setShouldResolve:(BOOL)arg1 ;
@end

