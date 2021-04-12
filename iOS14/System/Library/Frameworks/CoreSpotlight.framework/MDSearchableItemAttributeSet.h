/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSSearchableItemAttributeSet.h>

@class NSArray;

@interface MDSearchableItemAttributeSet : CSSearchableItemAttributeSet

@property (copy) NSArray * authorPersons; 
@property (copy) NSArray * primaryRecipientPersons; 
@property (copy) NSArray * recipients; 
+(BOOL)supportsSecureCoding;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setAuthorPersons:(NSArray *)arg1 ;
-(NSArray *)authorPersons;
-(void)setPrimaryRecipientPersons:(NSArray *)arg1 ;
-(NSArray *)primaryRecipientPersons;
@end

