/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@class NSDictionary, NSError;

@interface HUSimpleMessage : NSObject {

	NSDictionary* _payload;
	NSError* _error;

}

@property (nonatomic,retain) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
+(id)messageWithPayload:(id)arg1 ;
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)payload;
@end

