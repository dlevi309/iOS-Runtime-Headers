/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray;

@interface FCHLSGroup : NSObject {

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

