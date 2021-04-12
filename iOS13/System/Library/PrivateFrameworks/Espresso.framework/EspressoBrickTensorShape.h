/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@interface EspressoBrickTensorShape : NSObject {

	int _width;
	int _height;
	int _channels;
	int _batch;
	int _sequence;
	int _rank;

}

@property (assign) int width;                 //@synthesize width=_width - In the implementation block
@property (assign) int height;                //@synthesize height=_height - In the implementation block
@property (assign) int channels;              //@synthesize channels=_channels - In the implementation block
@property (assign) int batch;                 //@synthesize batch=_batch - In the implementation block
@property (assign) int sequence;              //@synthesize sequence=_sequence - In the implementation block
@property (assign) int rank;                  //@synthesize rank=_rank - In the implementation block
-(void)setSequence:(int)arg1 ;
-(int)sequence;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(int)channels;
-(void)setRank:(int)arg1 ;
-(int)rank;
-(int)batch;
-(void)setChannels:(int)arg1 ;
-(void)setBatch:(int)arg1 ;
@end

