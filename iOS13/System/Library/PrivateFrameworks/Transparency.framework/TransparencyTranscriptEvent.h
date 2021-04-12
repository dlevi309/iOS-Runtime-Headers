/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)serialize;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
@end

