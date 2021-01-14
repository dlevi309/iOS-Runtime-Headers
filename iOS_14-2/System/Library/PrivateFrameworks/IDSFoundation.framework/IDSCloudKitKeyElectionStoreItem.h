/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSString, ENGroupID;

@interface IDSCloudKitKeyElectionStoreItem : NSObject {

	NSString* _groupName;
	ENGroupID* _groupID;

}

@property (nonatomic,retain) NSString * groupName;              //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) ENGroupID * groupID;               //@synthesize groupID=_groupID - In the implementation block
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(ENGroupID *)groupID;
-(void)setGroupID:(ENGroupID *)arg1 ;
-(id)description;
@end

