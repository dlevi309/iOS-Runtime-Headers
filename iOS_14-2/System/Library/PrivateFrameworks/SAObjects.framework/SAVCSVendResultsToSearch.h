/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAVCSVendResultsToSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * shelves; 
@property (nonatomic,copy) NSString * title; 
+(id)vendResultsToSearch;
+(id)vendResultsToSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setShelves:(NSArray *)arg1 ;
-(NSArray *)shelves;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

