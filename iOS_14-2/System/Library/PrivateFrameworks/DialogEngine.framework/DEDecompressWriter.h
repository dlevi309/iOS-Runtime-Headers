/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@protocol DEWriter;
@class NSObject;

@interface DEDecompressWriter : NSObject <DEWriter> {

	BOOL _streamInitialized;
	BOOL _streamEnded;
	NSObject*<DEWriter> _writer;
	z_stream_s* _stream;

}

@property (nonatomic,retain) NSObject*<DEWriter> writer;              //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) z_stream_s* stream;                      //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) BOOL streamInitialized;                  //@synthesize streamInitialized=_streamInitialized - In the implementation block
@property (assign,nonatomic) BOOL streamEnded;                        //@synthesize streamEnded=_streamEnded - In the implementation block
-(z_stream_s*)stream;
-(void)setStream:(z_stream_s*)arg1 ;
-(NSObject*<DEWriter>)writer;
-(id)init;
-(BOOL)streamInitialized;
-(void)setStreamInitialized:(BOOL)arg1 ;
-(id)initWithWriter:(id)arg1 ;
-(BOOL)streamEnded;
-(void)setStreamEnded:(BOOL)arg1 ;
-(void)close;
-(id)decompress:(id)arg1 ;
-(void)writeData:(id)arg1 ;
-(void)setWriter:(NSObject*<DEWriter>)arg1 ;
-(void)dealloc;
@end

