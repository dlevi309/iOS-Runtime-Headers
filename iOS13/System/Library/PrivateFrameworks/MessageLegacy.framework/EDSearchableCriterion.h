/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

@class NSString;


@protocol EDSearchableCriterion <NSObject>
@property (getter=isFullTextSearchableCriterion,nonatomic,readonly) BOOL fullTextSearchableCriterion; 
@property (nonatomic,readonly) NSString * spotlightQueryString; 
@required
-(BOOL)isFullTextSearchableCriterion;
-(NSString *)spotlightQueryString;

@end

