/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString;

@interface SAMatchingSpan : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * domainObjectIdentifier; 
@property (assign,nonatomic) long long endIndex; 
@property (assign,nonatomic) long long startIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)matchingSpan;
+(id)matchingSpanWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)startIndex;
-(id)groupIdentifier;
-(long long)endIndex;
-(id)encodedClassName;
-(void)setStartIndex:(long long)arg1 ;
-(void)setEndIndex:(long long)arg1 ;
-(NSURL *)domainObjectIdentifier;
-(void)setDomainObjectIdentifier:(NSURL *)arg1 ;
@end

