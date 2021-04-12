/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAWebWebSearchResult;

@interface SAWebObject : SADomainObject

@property (nonatomic,copy) NSString * query; 
@property (nonatomic,retain) SAWebWebSearchResult * results; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setResults:(SAWebWebSearchResult *)arg1 ;
-(NSString *)query;
-(SAWebWebSearchResult *)results;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setQuery:(NSString *)arg1 ;
@end

