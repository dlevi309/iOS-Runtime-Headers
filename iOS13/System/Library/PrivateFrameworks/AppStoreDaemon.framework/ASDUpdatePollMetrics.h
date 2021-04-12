/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)reason;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)bundleIDs;
-(void)setReason:(NSString *)arg1 ;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(NSDate *)pollTime;
-(void)setPollTime:(NSDate *)arg1 ;
@end

