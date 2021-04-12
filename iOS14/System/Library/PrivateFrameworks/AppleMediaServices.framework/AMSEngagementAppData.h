/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSArray, NSString;

@interface AMSEngagementAppData : NSObject {

	NSArray* _cachedResponses;
	NSString* _identifier;
	NSArray* _whitelist;

}

@property (nonatomic,retain) NSArray * cachedResponses;              //@synthesize cachedResponses=_cachedResponses - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * whitelist;                    //@synthesize whitelist=_whitelist - In the implementation block
-(NSArray *)whitelist;
-(id)exportObject;
-(id)initWithIdentifier:(id)arg1 cacheObject:(id)arg2 ;
-(void)setCachedResponses:(NSArray *)arg1 ;
-(void)setWhitelist:(NSArray *)arg1 ;
-(NSString *)identifier;
-(NSArray *)cachedResponses;
@end

