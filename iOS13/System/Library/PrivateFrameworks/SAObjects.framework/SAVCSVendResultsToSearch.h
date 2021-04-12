/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)shelves;
-(BOOL)requiresResponse;
-(void)setShelves:(NSArray *)arg1 ;
@end

