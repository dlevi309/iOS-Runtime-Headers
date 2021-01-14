/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSString, NSArray;

@interface BLHLSGroup : NSObject {

	NSString* _groupID;
	NSArray* _media;

}

@property (nonatomic,readonly) NSString * groupID;              //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) NSArray * media;                 //@synthesize media=_media - In the implementation block
-(NSArray *)media;
-(NSString *)groupID;
-(id)description;
-(id)initWithGroupID:(id)arg1 media:(id)arg2 ;
@end

