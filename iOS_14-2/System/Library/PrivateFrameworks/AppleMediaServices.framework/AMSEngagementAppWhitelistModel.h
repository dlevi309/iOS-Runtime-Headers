/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDictionary;

@interface AMSEngagementAppWhitelistModel : NSObject {

	NSDictionary* _definition;

}

@property (nonatomic,readonly) NSDictionary * definition;              //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) BOOL allowsResponse; 
+(BOOL)matchEvent:(id)arg1 toFilter:(id)arg2 ;
-(id)initWithCacheObject:(id)arg1 ;
-(id)exportObject;
-(BOOL)matchesEvent:(id)arg1 ;
-(id)initWithFilter:(id)arg1 allowsResponse:(BOOL)arg2 ;
-(BOOL)allowsResponse;
-(NSDictionary *)definition;
@end

