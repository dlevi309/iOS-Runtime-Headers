/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AVCRTCPPacket.h>

@class NSString;

@interface AVCRTCPSourceDescription : AVCRTCPPacket {

	unsigned char _type;
	NSString* _text;

}

@property (assign,nonatomic) unsigned char type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned char)type;
-(void)setType:(unsigned char)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
@end

