/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)encodedClassName;
-(NSString *)ducFamilyId;
-(void)setDucFamilyId:(NSString *)arg1 ;
-(NSString *)ducId;
-(void)setDucId:(NSString *)arg1 ;
@end

