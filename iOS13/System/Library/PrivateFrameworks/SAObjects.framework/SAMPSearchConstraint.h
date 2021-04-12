/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)mediaPlayerOrderingTerms;
-(void)setMediaPlayerOrderingTerms:(NSArray *)arg1 ;
-(NSArray *)searchProperties;
-(void)setSearchProperties:(NSArray *)arg1 ;
@end

