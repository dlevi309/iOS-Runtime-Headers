/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class MRAudioBuffer, _MRAudioDataBlockProtobuf, NSData;

@interface MRAudioDataBlock : NSObject <NSMutableCopying> {

	MRAudioBuffer* _buffer;
	SCD_Struct_MR20 _time;
	float _gain;

}

@property (nonatomic,readonly) MRAudioBuffer * buffer;                            //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MR20 time;                              //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) float gain;                                        //@synthesize gain=_gain - In the implementation block
@property (nonatomic,readonly) _MRAudioDataBlockProtobuf * protobuf; 
@property (nonatomic,readonly) NSData * data; 
-(float)gain;
-(SCD_Struct_MR20)time;
-(id)initWithData:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(MRAudioBuffer *)buffer;
-(NSData *)data;
-(void)_parseGain:(id)arg1 ;
-(void)_parseBuffer:(id)arg1 ;
-(void)_parseTimestamp:(id)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(_MRAudioDataBlockProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

