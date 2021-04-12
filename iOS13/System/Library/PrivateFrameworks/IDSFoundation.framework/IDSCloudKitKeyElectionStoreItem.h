/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSString, ENGroupID;

@interface IDSCloudKitKeyElectionStoreItem : NSObject {

	NSString* _groupName;
	ENGroupID* _groupID;

}

@property (nonatomic,retain) NSString * groupName;              //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) ENGroupID * groupID;               //@synthesize groupID=_groupID - In the implementation block
-(id)description;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(ENGroupID *)groupID;
-(void)setGroupID:(ENGroupID *)arg1 ;
@end

