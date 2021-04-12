/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


#import <HearingUtilities/HearingUtilities-Structs.h>
@class NSMutableData;

@interface HUIDCPacket : NSObject {

	unsigned long long _totalLength;
	NSMutableData* _data;

}

@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
+(id)packetDataWithPayload:(id)arg1 ;
+(SCD_Struct_AX1)headerFromData:(id)arg1 ;
+(id)packetWithHeader:(SCD_Struct_AX1)arg1 ;
-(NSMutableData *)data;
-(id)appendData:(id)arg1 ;
-(void)setData:(NSMutableData *)arg1 ;
-(id)initWithHeader:(SCD_Struct_AX1)arg1 ;
-(unsigned long long)missingLength;
-(id)dataPayload;
-(id)objectPayload;
@end

