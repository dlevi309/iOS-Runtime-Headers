/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SASyncDeepSyncVerificationResult : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * result; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)deepSyncVerificationResult;
+(id)deepSyncVerificationResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)key;
-(NSString *)result;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setResult:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

