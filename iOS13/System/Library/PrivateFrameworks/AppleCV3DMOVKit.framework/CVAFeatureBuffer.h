/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <AppleCV3DMOVKit/AppleCV3DMOVKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CVAFeatureBuffer : NSObject <NSSecureCoding> {

	unsigned _width;
	unsigned _height;
	unsigned _bytesPerRow;
	double _timestamp;
	NSData* _data;
	NSString* _sourceStreamID;

}

@property (assign) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned width;                         //@synthesize width=_width - In the implementation block
@property (assign) unsigned height;                        //@synthesize height=_height - In the implementation block
@property (assign) unsigned bytesPerRow;                   //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (retain) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (retain) NSString * sourceStreamID;              //@synthesize sourceStreamID=_sourceStreamID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(unsigned)width;
-(unsigned)height;
-(unsigned)bytesPerRow;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)setBytesPerRow:(unsigned)arg1 ;
-(void)setSourceStreamID:(NSString *)arg1 ;
-(NSString *)sourceStreamID;
-(id)initWithPixelBufferRef:(CVBufferRef)arg1 timestamp:(double)arg2 streamID:(id)arg3 ;
-(CVBufferRef)getPixelBuffer;
@end

