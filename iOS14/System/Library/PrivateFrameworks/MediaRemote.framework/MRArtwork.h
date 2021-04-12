/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary;

@interface MRArtwork : NSObject <NSCopying> {

	NSData* _imageData;
	long long _height;
	long long _width;

}

@property (nonatomic,copy) NSData * imageData;                                            //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) long long height;                                            //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) long long width;                                             //@synthesize width=_width - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
-(void)setHeight:(long long)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(long long)width;
-(void)setWidth:(long long)arg1 ;
-(long long)height;
-(id)description;
-(NSData *)imageData;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithImageData:(id)arg1 height:(long long)arg2 width:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

