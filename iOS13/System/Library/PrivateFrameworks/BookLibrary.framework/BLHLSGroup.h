/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSString, NSArray;

@interface BLHLSGroup : NSObject {

	NSString* _groupID;
	NSArray* _media;

}

@property (nonatomic,readonly) NSString * groupID;              //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) NSArray * media;                 //@synthesize media=_media - In the implementation block
-(id)description;
-(NSString *)groupID;
-(NSArray *)media;
-(id)initWithGroupID:(id)arg1 media:(id)arg2 ;
@end

