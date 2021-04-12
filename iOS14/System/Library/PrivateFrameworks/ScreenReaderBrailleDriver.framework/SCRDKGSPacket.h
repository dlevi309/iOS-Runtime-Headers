/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
*/


@class NSData;

@interface SCRDKGSPacket : NSObject {

	unsigned char _command;
	unsigned char _subCommand;
	NSData* _data;

}

@property (assign,nonatomic) unsigned char command;                 //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) unsigned char subCommand;              //@synthesize subCommand=_subCommand - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(unsigned char)command;
-(void)setCommand:(unsigned char)arg1 ;
-(unsigned char)subCommand;
-(void)setSubCommand:(unsigned char)arg1 ;
@end

