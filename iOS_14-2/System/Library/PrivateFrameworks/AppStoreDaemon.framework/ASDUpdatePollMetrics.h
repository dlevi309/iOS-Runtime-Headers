/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class NSDate, NSString, NSArray;

@interface ASDUpdatePollMetrics : NSObject {

	NSDate* _pollTime;
	NSString* _reason;
	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSDate * pollTime;                //@synthesize pollTime=_pollTime - In the implementation block
@property (nonatomic,copy) NSString * reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(NSDate *)pollTime;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)dictionary;
-(NSString *)reason;
-(void)setPollTime:(NSDate *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

