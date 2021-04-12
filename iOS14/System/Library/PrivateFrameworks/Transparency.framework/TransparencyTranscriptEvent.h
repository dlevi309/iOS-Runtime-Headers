/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSDate, NSString;

@interface TransparencyTranscriptEvent : NSObject {

	BOOL _success;
	NSDate* _timestamp;
	NSString* _name;

}

@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (retain) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign) BOOL success;                    //@synthesize success=_success - In the implementation block
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(id)serialize;
-(NSDate *)timestamp;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

