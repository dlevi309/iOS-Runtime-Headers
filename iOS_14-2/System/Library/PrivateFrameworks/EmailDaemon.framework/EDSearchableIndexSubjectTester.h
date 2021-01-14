/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDSearchableIndexTesting.h>

@class NSArray, NSString;

@interface EDSearchableIndexSubjectTester : NSObject <EDSearchableIndexTesting>

@property (nonatomic,copy,readonly) NSArray * fetchAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)fetchAttributes;
-(id)transformDataForVerification:(id)arg1 ;
-(id)expressionFromDataSamples:(id)arg1 ;
-(BOOL)verifySearchableItem:(id)arg1 againstExpectedData:(id)arg2 ;
@end

