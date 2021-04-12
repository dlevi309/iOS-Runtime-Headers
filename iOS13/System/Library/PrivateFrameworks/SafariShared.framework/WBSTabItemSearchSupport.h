/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

@class NSString, NSArray;


@protocol WBSTabItemSearchSupport <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy) NSString * titleForLastSearch; 
@property (nonatomic,copy) NSArray * titleWords; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,copy) NSString * URLStringForLastSearch; 
@property (nonatomic,copy) NSArray * URLStringComponents; 
@property (nonatomic,copy) NSString * lastSearchTerm; 
@property (assign,nonatomic) BOOL matchedLastSearch; 
@required
-(NSString *)title;
-(NSString *)URLString;
-(NSString *)lastSearchTerm;
-(void)setLastSearchTerm:(id)arg1;
-(NSString *)titleForLastSearch;
-(void)setTitleForLastSearch:(id)arg1;
-(NSArray *)titleWords;
-(void)setTitleWords:(id)arg1;
-(NSString *)URLStringForLastSearch;
-(void)setURLStringForLastSearch:(id)arg1;
-(NSArray *)URLStringComponents;
-(void)setURLStringComponents:(id)arg1;
-(BOOL)matchedLastSearch;
-(void)setMatchedLastSearch:(BOOL)arg1;

@end

