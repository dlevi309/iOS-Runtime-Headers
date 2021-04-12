/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASyncVerificationResult : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long fail; 
@property (nonatomic,copy) NSArray * failedObjectIds; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long total; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)verificationResult;
+(id)verificationResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(long long)fail;
-(void)setTotal:(long long)arg1 ;
-(id)encodedClassName;
-(long long)total;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)failedObjectIds;
-(void)setFailedObjectIds:(NSArray *)arg1 ;
-(void)setFail:(long long)arg1 ;
@end

