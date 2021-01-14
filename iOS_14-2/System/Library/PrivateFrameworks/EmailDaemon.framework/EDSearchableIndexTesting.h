/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

