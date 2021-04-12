/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setText:(NSString *)arg1 ;
-(void)setType:(unsigned char)arg1 ;
-(id)description;
-(NSString *)text;
-(unsigned char)type;
-(void)dealloc;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
@end

