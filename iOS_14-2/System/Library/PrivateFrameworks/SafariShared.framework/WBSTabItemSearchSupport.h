/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)URLString;
-(void)setMatchedLastSearch:(BOOL)arg1;
-(NSString *)lastSearchTerm;
-(void)setURLStringForLastSearch:(id)arg1;
-(NSArray *)titleWords;
-(void)setLastSearchTerm:(id)arg1;
-(void)setTitleWords:(id)arg1;
-(void)setTitleForLastSearch:(id)arg1;
-(NSArray *)URLStringComponents;
-(BOOL)matchedLastSearch;
-(NSString *)URLStringForLastSearch;
-(NSString *)titleForLastSearch;
-(void)setURLStringComponents:(id)arg1;
-(NSString *)title;

@end

