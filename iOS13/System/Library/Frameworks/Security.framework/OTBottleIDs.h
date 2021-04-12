/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSArray;

@interface OTBottleIDs : NSObject {

	NSArray* _preferredBottleIDs;
	NSArray* _partialRecoveryBottleIDs;

}

@property (retain) NSArray * preferredBottleIDs;                    //@synthesize preferredBottleIDs=_preferredBottleIDs - In the implementation block
@property (retain) NSArray * partialRecoveryBottleIDs;              //@synthesize partialRecoveryBottleIDs=_partialRecoveryBottleIDs - In the implementation block
-(NSArray *)preferredBottleIDs;
-(void)setPreferredBottleIDs:(NSArray *)arg1 ;
-(NSArray *)partialRecoveryBottleIDs;
-(void)setPartialRecoveryBottleIDs:(NSArray *)arg1 ;
@end

