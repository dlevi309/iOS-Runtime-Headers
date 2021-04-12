/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(long long)startIndex;
-(void)setStartIndex:(long long)arg1 ;
-(long long)endIndex;
-(void)setEndIndex:(long long)arg1 ;
-(id)encodedClassName;
-(NSURL *)domainObjectIdentifier;
-(void)setDomainObjectIdentifier:(NSURL *)arg1 ;
@end

