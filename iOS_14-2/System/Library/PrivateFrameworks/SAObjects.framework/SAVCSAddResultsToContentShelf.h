/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUIAddContentToView.h>

@class NSString, NSArray;

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView

@property (nonatomic,copy) NSString * contentShelfViewId; 
@property (nonatomic,copy) NSArray * fetchMoreResultsCommands; 
@property (assign,nonatomic) long long pageNumber; 
@property (nonatomic,copy) NSArray * results; 
+(id)addResultsToContentShelf;
+(id)addResultsToContentShelfWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setPageNumber:(long long)arg1 ;
-(NSArray *)fetchMoreResultsCommands;
-(void)setFetchMoreResultsCommands:(NSArray *)arg1 ;
-(long long)pageNumber;
-(NSString *)contentShelfViewId;
-(void)setContentShelfViewId:(NSString *)arg1 ;
@end

