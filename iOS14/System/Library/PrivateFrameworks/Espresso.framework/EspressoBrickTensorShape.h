/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeight:(int)arg1 ;
-(void)setRank:(int)arg1 ;
-(int)batch;
-(int)width;
-(void)setWidth:(int)arg1 ;
-(int)height;
-(void)setChannels:(int)arg1 ;
-(int)sequence;
-(void)setBatch:(int)arg1 ;
-(int)rank;
-(void)setSequence:(int)arg1 ;
-(int)channels;
@end

