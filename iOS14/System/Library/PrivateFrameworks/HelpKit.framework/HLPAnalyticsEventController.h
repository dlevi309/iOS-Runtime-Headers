/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/


@class NSDictionary, NSMutableDictionary, NSString;

@interface HLPAnalyticsEventController : NSObject {

	NSDictionary* _requiredKeys;
	NSMutableDictionary* _countersByKey;
	NSString* _identifier;
	NSString* _version;

}

@property (nonatomic,retain) NSMutableDictionary * countersByKey;              //@synthesize countersByKey=_countersByKey - In the implementation block
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDictionary * requiredKeys;                    //@synthesize requiredKeys=_requiredKeys - In the implementation block
+(id)sharedInstance;
-(NSDictionary *)requiredKeys;
-(void)logAnalyticsEvent:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)version;
-(void)configureWithHelpBookID:(id)arg1 version:(id)arg2 ;
-(void)incrementCounterForKey:(id)arg1 ;
-(id)counterForKey:(id)arg1 ;
-(NSMutableDictionary *)countersByKey;
-(void)setCountersByKey:(NSMutableDictionary *)arg1 ;
@end

