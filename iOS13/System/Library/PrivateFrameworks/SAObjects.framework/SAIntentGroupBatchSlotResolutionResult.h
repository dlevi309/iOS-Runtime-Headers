/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDictionary, NSArray;

@interface SAIntentGroupBatchSlotResolutionResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * base64EncodedIntent; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
@property (nonatomic,copy) NSDictionary * slotResolutionMap; 
@property (nonatomic,copy) NSArray * stepResults; 
@property (nonatomic,copy) NSString * typeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)batchSlotResolutionResult;
+(id)batchSlotResolutionResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(NSString *)base64EncodedIntent;
-(void)setBase64EncodedIntent:(NSString *)arg1 ;
-(NSDictionary *)slotResolutionMap;
-(void)setSlotResolutionMap:(NSDictionary *)arg1 ;
-(NSArray *)stepResults;
-(void)setStepResults:(NSArray *)arg1 ;
@end

