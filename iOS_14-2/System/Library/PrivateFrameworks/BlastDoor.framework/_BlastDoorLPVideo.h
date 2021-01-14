/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData, NSString, _BlastDoorLPVideoProperties;

@interface _BlastDoorLPVideo : NSObject <NSSecureCoding> {

	BOOL _hasAudio;
	NSURL* _streamingURL;
	NSURL* _youTubeURL;
	NSData* _data;
	NSString* _MIMEType;
	NSURL* _fileURL;
	_BlastDoorLPVideoProperties* _properties;

}

@property (nonatomic,retain) NSURL * streamingURL;                                //@synthesize streamingURL=_streamingURL - In the implementation block
@property (nonatomic,retain) NSURL * youTubeURL;                                  //@synthesize youTubeURL=_youTubeURL - In the implementation block
@property (nonatomic,copy) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * MIMEType;                                   //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                     //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) BOOL hasAudio;                                       //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,copy) _BlastDoorLPVideoProperties * properties;              //@synthesize properties=_properties - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)MIMEType;
-(void)setFileURL:(NSURL *)arg1 ;
-(_BlastDoorLPVideoProperties *)properties;
-(void)setHasAudio:(BOOL)arg1 ;
-(NSURL *)streamingURL;
-(BOOL)hasAudio;
-(id)init;
-(BOOL)_shouldEncodeData;
-(unsigned long long)_encodedSize;
-(NSURL *)youTubeURL;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)fileURL;
-(id)_initWithVideo:(id)arg1 ;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(void)setProperties:(_BlastDoorLPVideoProperties *)arg1 ;
-(void)setMIMEType:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStreamingURL:(NSURL *)arg1 ;
-(void)setYouTubeURL:(NSURL *)arg1 ;
@end

