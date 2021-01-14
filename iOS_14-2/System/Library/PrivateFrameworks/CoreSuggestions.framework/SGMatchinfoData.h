/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)entityId;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMatchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3 ;
-(BOOL)isEqualToMatchinfoData:(id)arg1 ;
-(NSNumber *)detailEntityId;
-(NSData *)matchinfoData;
@end

