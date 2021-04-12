/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSDictionary, NSDate, NSString;

@interface WLKStoredConfiguration : NSObject {

	BOOL _activeUser;
	NSDictionary* _requiredRequestKeyValuePairs;
	NSDate* _timestamp;
	NSString* _utsc;
	NSString* _vppaState;

}

@property (nonatomic,retain) NSDictionary * requiredRequestKeyValuePairs;              //@synthesize requiredRequestKeyValuePairs=_requiredRequestKeyValuePairs - In the implementation block
@property (assign,nonatomic) BOOL activeUser;                                          //@synthesize activeUser=_activeUser - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * vppaState;                                     //@synthesize vppaState=_vppaState - In the implementation block
@property (nonatomic,retain) NSString * utsc;                                          //@synthesize utsc=_utsc - In the implementation block
@property (nonatomic,readonly) NSString * utsk; 
-(NSString *)utsk;
-(NSString *)utsc;
-(NSDate *)timestamp;
-(id)description;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)activeUser;
-(NSDictionary *)requiredRequestKeyValuePairs;
-(void)setRequiredRequestKeyValuePairs:(NSDictionary *)arg1 ;
-(void)setActiveUser:(BOOL)arg1 ;
-(void)setUtsc:(NSString *)arg1 ;
-(NSString *)vppaState;
-(void)setVppaState:(NSString *)arg1 ;
@end

