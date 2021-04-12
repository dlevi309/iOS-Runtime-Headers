/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)object;
-(void)setStoreName:(NSString *)arg1 ;
-(void)setObject:(NSString *)arg1 ;
-(void)setPredicate:(NSString *)arg1 ;
-(NSString *)predicate;
-(float)confidence;
-(id)groupIdentifier;
-(void)setConfidence:(float)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)storeName;
-(id)encodedClassName;
@end

