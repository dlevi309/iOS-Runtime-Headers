/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAMacFileSearchView : SAAceView

@property (nonatomic,copy) NSArray * entities; 
@property (assign,nonatomic) long long numResults; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * searchTitle; 
+(id)fileSearchViewWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)fileSearchView;
-(NSString *)query;
-(NSArray *)entities;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)searchTitle;
-(void)setNumResults:(long long)arg1 ;
-(void)setSearchTitle:(NSString *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(void)setEntities:(NSArray *)arg1 ;
-(long long)numResults;
@end

