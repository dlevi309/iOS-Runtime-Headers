/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)results;
-(id)groupIdentifier;
-(long long)pageNumber;
-(void)setResults:(NSArray *)arg1 ;
-(void)setPageNumber:(long long)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)fetchMoreResultsCommands;
-(void)setFetchMoreResultsCommands:(NSArray *)arg1 ;
-(NSString *)contentShelfViewId;
-(void)setContentShelfViewId:(NSString *)arg1 ;
@end

