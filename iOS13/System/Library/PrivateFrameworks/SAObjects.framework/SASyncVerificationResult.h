/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(long long)total;
-(id)encodedClassName;
-(long long)fail;
-(void)setTotal:(long long)arg1 ;
-(void)setFail:(long long)arg1 ;
-(NSArray *)failedObjectIds;
-(void)setFailedObjectIds:(NSArray *)arg1 ;
@end

