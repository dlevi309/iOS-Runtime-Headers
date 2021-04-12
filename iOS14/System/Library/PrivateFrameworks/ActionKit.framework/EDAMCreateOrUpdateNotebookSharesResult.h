/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSArray;

@interface EDAMCreateOrUpdateNotebookSharesResult : FATObject {

	NSNumber* _updateSequenceNum;
	NSArray* _matchingShares;

}

@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSArray * matchingShares;                  //@synthesize matchingShares=_matchingShares - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSArray *)matchingShares;
-(void)setMatchingShares:(NSArray *)arg1 ;
@end

