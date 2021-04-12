/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDictionary;

@interface SASVGenerateDuc : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * ducFamilyId; 
@property (nonatomic,copy) NSString * ducId; 
@property (nonatomic,copy) NSDictionary * parameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateDuc;
+(id)generateDucWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)ducId;
-(NSString *)ducFamilyId;
-(void)setDucFamilyId:(NSString *)arg1 ;
-(void)setDucId:(NSString *)arg1 ;
@end

