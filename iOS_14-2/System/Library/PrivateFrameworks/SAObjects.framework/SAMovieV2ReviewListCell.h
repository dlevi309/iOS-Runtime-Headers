/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(NSString *)reviewText;
-(NSDate *)reviewDate;
-(void)setReviewDate:(NSDate *)arg1 ;
-(NSString *)reviewAuthor;
-(void)setReviewAuthor:(NSString *)arg1 ;
-(void)setReviewText:(NSString *)arg1 ;
@end

