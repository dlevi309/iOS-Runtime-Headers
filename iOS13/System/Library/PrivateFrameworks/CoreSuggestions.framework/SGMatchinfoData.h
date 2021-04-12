/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@class NSNumber, NSData;

@interface SGMatchinfoData : NSObject {

	NSNumber* _entityId;
	NSNumber* _detailEntityId;
	NSData* _matchinfoData;

}

@property (nonatomic,readonly) NSNumber * entityId;                    //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,readonly) NSNumber * detailEntityId;              //@synthesize detailEntityId=_detailEntityId - In the implementation block
@property (nonatomic,readonly) NSData * matchinfoData;                 //@synthesize matchinfoData=_matchinfoData - In the implementation block
+(id)matchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3 ;
-(id)init;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)entityId;
-(id)initWithMatchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3 ;
-(BOOL)isEqualToMatchinfoData:(id)arg1 ;
-(NSNumber *)detailEntityId;
-(NSData *)matchinfoData;
@end

