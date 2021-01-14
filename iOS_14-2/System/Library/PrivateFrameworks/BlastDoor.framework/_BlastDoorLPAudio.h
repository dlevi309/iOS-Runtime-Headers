/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSURL, _BlastDoorLPAudioProperties;

@interface _BlastDoorLPAudio : NSObject <NSSecureCoding> {

	NSData* _data;
	NSString* _MIMEType;
	NSURL* _streamingURL;
	_BlastDoorLPAudioProperties* _properties;

}

@property (nonatomic,retain) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * MIMEType;                                 //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,retain) NSURL * streamingURL;                                //@synthesize streamingURL=_streamingURL - In the implementation block
@property (nonatomic,copy) _BlastDoorLPAudioProperties * properties;              //@synthesize properties=_properties - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)MIMEType;
-(_BlastDoorLPAudioProperties *)properties;
-(NSURL *)streamingURL;
-(id)init;
-(BOOL)_shouldEncodeData;
-(unsigned long long)_encodedSize;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(id)_initWithAudio:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setProperties:(_BlastDoorLPAudioProperties *)arg1 ;
-(void)setMIMEType:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStreamingURL:(NSURL *)arg1 ;
@end

