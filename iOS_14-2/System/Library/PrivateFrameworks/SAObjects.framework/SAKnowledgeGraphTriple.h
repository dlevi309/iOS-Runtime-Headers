/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAKnowledgeGraphTriple : AceObject <SAAceSerializable>

@property (assign,nonatomic) float confidence; 
@property (nonatomic,copy) NSString * object; 
@property (nonatomic,copy) NSString * predicate; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * subject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)graphTriple;
+(id)graphTripleWithDictionary:(id)arg1 context:(id)arg2 ;
-(float)confidence;
-(NSString *)subject;
-(NSString *)storeName;
-(id)groupIdentifier;
-(NSString *)predicate;
-(id)encodedClassName;
-(void)setPredicate:(NSString *)arg1 ;
-(NSString *)object;
-(void)setObject:(NSString *)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(void)setStoreName:(NSString *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
@end

