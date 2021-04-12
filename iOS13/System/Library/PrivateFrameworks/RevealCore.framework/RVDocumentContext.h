/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RevealCore.framework/RevealCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSTimeZone, NSURL, NSArray;

@interface RVDocumentContext : NSObject <NSSecureCoding> {

	NSString* authorName;
	NSString* authorEmailAddress;
	NSString* authorContactUUID;
	NSDate* contentReferenceDate;
	NSTimeZone* contentReferenceTimeZone;
	NSString* contentSubject;
	NSString* selectedText;
	NSURL* documentURL;
	NSArray* existingDDResultsList;
	NSString* coreSpotlightUniqueIdentifier;

}

@property (nonatomic,copy) NSString * authorName; 
@property (nonatomic,copy) NSString * authorEmailAddress; 
@property (nonatomic,copy) NSString * authorContactUUID; 
@property (nonatomic,copy) NSDate * contentReferenceDate; 
@property (nonatomic,copy) NSTimeZone * contentReferenceTimeZone; 
@property (nonatomic,copy) NSString * contentSubject; 
@property (nonatomic,copy) NSString * selectedText; 
@property (nonatomic,copy) NSURL * documentURL; 
@property (nonatomic,copy) NSArray * existingDDResultsList; 
@property (nonatomic,copy) NSString * coreSpotlightUniqueIdentifier; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)documentURL;
-(NSString *)selectedText;
-(void)setSelectedText:(NSString *)arg1 ;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(NSString *)authorName;
-(NSString *)coreSpotlightUniqueIdentifier;
-(void)setCoreSpotlightUniqueIdentifier:(NSString *)arg1 ;
-(void)setAuthorName:(NSString *)arg1 ;
-(NSDate *)contentReferenceDate;
-(NSTimeZone *)contentReferenceTimeZone;
-(NSString *)contentSubject;
-(NSString *)authorEmailAddress;
-(NSArray *)existingDDResultsList;
-(void)setNameAndEmailWithRawSenderField:(id)arg1 ;
-(void)setAuthorEmailAddress:(NSString *)arg1 ;
-(void)setAuthorContactUUID:(NSString *)arg1 ;
-(void)setContentReferenceDate:(NSDate *)arg1 ;
-(void)setContentReferenceTimeZone:(NSTimeZone *)arg1 ;
-(void)setContentSubject:(NSString *)arg1 ;
-(NSString *)authorContactUUID;
-(void)setExistingDDResultsList:(NSArray *)arg1 ;
@end

