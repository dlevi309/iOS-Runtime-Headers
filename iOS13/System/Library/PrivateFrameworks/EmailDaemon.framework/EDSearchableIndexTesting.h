/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

@class NSArray;


@protocol EDSearchableIndexTesting <NSObject>
@property (nonatomic,copy,readonly) NSArray * fetchAttributes; 
@required
-(NSArray *)fetchAttributes;
-(id)transformDataForVerification:(id)arg1;
-(id)expressionFromDataSamples:(id)arg1;
-(BOOL)verifySearchableItem:(id)arg1 againstExpectedData:(id)arg2;

@end

