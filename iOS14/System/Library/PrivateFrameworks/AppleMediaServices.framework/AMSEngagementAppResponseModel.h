/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDate, NSDictionary, NSString;

@interface AMSEngagementAppResponseModel : NSObject {

	NSDate* _created;
	NSDictionary* _definition;

}

@property (nonatomic,readonly) NSDictionary * definition;                //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) NSDate * created;                         //@synthesize created=_created - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseData; 
+(BOOL)_shouldEvictDefinition:(id)arg1 created:(id)arg2 ;
-(NSString *)cacheKey;
-(id)initWithCacheObject:(id)arg1 ;
-(id)exportObject;
-(BOOL)matchesEvent:(id)arg1 ;
-(id)initWithData:(id)arg1 cacheInfo:(id)arg2 ;
-(NSDate *)created;
-(NSDictionary *)responseData;
-(NSDictionary *)definition;
@end

