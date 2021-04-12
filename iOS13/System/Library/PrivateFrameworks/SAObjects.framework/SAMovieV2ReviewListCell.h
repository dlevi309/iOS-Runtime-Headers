/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate;

@interface SAMovieV2ReviewListCell : SADomainObject

@property (nonatomic,copy) NSString * reviewAuthor; 
@property (nonatomic,copy) NSDate * reviewDate; 
@property (nonatomic,copy) NSString * reviewText; 
+(id)reviewListCell;
+(id)reviewListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)reviewText;
-(void)setReviewText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSDate *)reviewDate;
-(void)setReviewDate:(NSDate *)arg1 ;
-(NSString *)reviewAuthor;
-(void)setReviewAuthor:(NSString *)arg1 ;
@end

