/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAddition.h>

@class NSString, NSURL, SXFormattedText;

@interface SXCalendarEventAddition : SXAddition

@property (nonatomic,readonly) NSString * startDate; 
@property (nonatomic,readonly) NSString * endDate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * location; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) SXFormattedText * notes; 
-(SXFormattedText *)notes;
-(NSURL *)URL;
-(NSString *)location;
-(NSString *)title;
-(NSString *)endDate;
-(NSString *)startDate;
-(id)notesWithValue:(id)arg1 withType:(int)arg2 ;
@end

