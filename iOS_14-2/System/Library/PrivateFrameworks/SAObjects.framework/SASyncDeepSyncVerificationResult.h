/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SASyncDeepSyncVerificationResult : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * result; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deepSyncVerificationResult;
+(id)deepSyncVerificationResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setResult:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)key;
-(NSString *)result;
-(void)setKey:(NSString *)arg1 ;
@end

