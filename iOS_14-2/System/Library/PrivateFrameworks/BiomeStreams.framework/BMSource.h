/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/


@class NSString;

@interface BMSource : NSObject {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(void)logMetrics;
-(void)sendEvent:(id)arg1 timestamp:(double)arg2 ;
-(void)sendEvent:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
@end

