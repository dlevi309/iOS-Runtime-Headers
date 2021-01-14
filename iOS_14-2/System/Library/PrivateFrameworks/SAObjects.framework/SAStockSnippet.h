/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class SAUIAppPunchOut, NSArray;

@interface SAStockSnippet : SAUISnippet

@property (nonatomic,retain) SAUIAppPunchOut * appPunchOut; 
@property (nonatomic,copy) NSArray * stocks; 
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)snippet;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)appPunchOut;
-(void)setAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)stocks;
-(void)setStocks:(NSArray *)arg1 ;
@end

