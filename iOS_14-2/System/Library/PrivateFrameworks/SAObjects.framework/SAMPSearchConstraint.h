/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAMPSearchConstraint : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * mediaPlayerOrderingTerms; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSArray * searchProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchConstraint;
+(id)searchConstraintWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(id)groupIdentifier;
-(NSArray *)mediaPlayerOrderingTerms;
-(void)setMediaPlayerOrderingTerms:(NSArray *)arg1 ;
-(NSArray *)searchProperties;
-(void)setSearchProperties:(NSArray *)arg1 ;
-(id)encodedClassName;
-(void)setQuery:(NSString *)arg1 ;
@end

