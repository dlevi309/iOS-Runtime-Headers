/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned width;                         //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned height;                        //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned bytesPerRow;                   //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (nonatomic,retain) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * sourceStreamID;              //@synthesize sourceStreamID=_sourceStreamID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(void)setHeight:(unsigned)arg1 ;
-(unsigned)width;
-(double)timestamp;
-(unsigned)bytesPerRow;
-(void)setWidth:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)height;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)setBytesPerRow:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setSourceStreamID:(NSString *)arg1 ;
-(NSString *)sourceStreamID;
-(id)initWithPixelBufferRef:(CVBufferRef)arg1 timestamp:(double)arg2 streamID:(id)arg3 ;
-(CVBufferRef)getPixelBuffer;
@end

