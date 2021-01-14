/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SASyncAnchor;

@interface SASyncGroupChecksum : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long count; 
@property (nonatomic,copy) NSString * domainObjectClass; 
@property (nonatomic,copy) NSString * identifierChecksum; 
@property (nonatomic,retain) SASyncAnchor * syncAnchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupChecksum;
+(id)groupChecksumWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCount:(long long)arg1 ;
-(id)groupIdentifier;
-(SASyncAnchor *)syncAnchor;
-(id)encodedClassName;
-(NSString *)domainObjectClass;
-(void)setDomainObjectClass:(NSString *)arg1 ;
-(NSString *)identifierChecksum;
-(void)setIdentifierChecksum:(NSString *)arg1 ;
-(long long)count;
-(void)setSyncAnchor:(SASyncAnchor *)arg1 ;
@end

