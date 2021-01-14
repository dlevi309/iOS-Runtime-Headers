/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

@class NSString;


@protocol EDSearchableCriterion <NSObject>
@property (getter=isFullTextSearchableCriterion,nonatomic,readonly) BOOL fullTextSearchableCriterion; 
@property (nonatomic,readonly) NSString * spotlightQueryString; 
@required
-(BOOL)isFullTextSearchableCriterion;
-(NSString *)spotlightQueryString;

@end

