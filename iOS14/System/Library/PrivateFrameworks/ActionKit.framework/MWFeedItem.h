/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate, NSArray;

@interface MWFeedItem : NSObject <NSCoding> {

	NSString* identifier;
	NSString* title;
	NSString* link;
	NSDate* date;
	NSDate* updated;
	NSString* summary;
	NSString* content;
	NSString* author;
	NSArray* enclosures;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * link; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSDate * updated; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSArray * enclosures; 
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)updated;
-(id)description;
-(NSString *)summary;
-(void)setUpdated:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)title;
-(NSArray *)enclosures;
-(void)setEnclosures:(NSArray *)arg1 ;
@end

