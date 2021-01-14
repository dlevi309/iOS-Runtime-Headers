/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@protocol DEWriter;
@class NSObject;

@interface DECompressWriter : NSObject <DEWriter> {

	BOOL _compressed;
	BOOL _streamInitialized;
	BOOL _streamEnded;
	NSObject*<DEWriter> _writer;
	z_stream_s* _stream;

}

@property (nonatomic,retain) NSObject*<DEWriter> writer;              //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) z_stream_s* stream;                      //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) BOOL streamInitialized;                  //@synthesize streamInitialized=_streamInitialized - In the implementation block
@property (assign,nonatomic) BOOL streamEnded;                        //@synthesize streamEnded=_streamEnded - In the implementation block
@property (assign,nonatomic) BOOL compressed;                         //@synthesize compressed=_compressed - In the implementation block
+(BOOL)isCompressed:(id)arg1 ;
-(z_stream_s*)stream;
-(void)setStream:(z_stream_s*)arg1 ;
-(BOOL)compressed;
-(NSObject*<DEWriter>)writer;
-(id)init;
-(id)compress:(id)arg1 finalize:(BOOL)arg2 ;
-(BOOL)streamInitialized;
-(void)setStreamInitialized:(BOOL)arg1 ;
-(id)initWithWriter:(id)arg1 ;
-(BOOL)streamEnded;
-(void)setStreamEnded:(BOOL)arg1 ;
-(void)close;
-(void)writeData:(id)arg1 ;
-(void)setCompressed:(BOOL)arg1 ;
-(void)setWriter:(NSObject*<DEWriter>)arg1 ;
-(void)dealloc;
@end

