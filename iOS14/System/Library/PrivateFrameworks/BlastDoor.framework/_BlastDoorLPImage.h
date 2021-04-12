/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSURL, _BlastDoorLPImageProperties;

@interface _BlastDoorLPImage : NSObject <NSSecureCoding> {

	NSData* _data;
	NSString* _MIMEType;
	NSURL* _fileURL;
	_BlastDoorLPImageProperties* _properties;

}

@property (nonatomic,copy) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * MIMEType;                                   //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) _BlastDoorLPImageProperties * properties;              //@synthesize properties=_properties - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)MIMEType;
-(void)setFileURL:(NSURL *)arg1 ;
-(_BlastDoorLPImageProperties *)properties;
-(id)init;
-(BOOL)_shouldEncodeData;
-(unsigned long long)_encodedSize;
-(id)_initWithImage:(id)arg1 properties:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)fileURL;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setProperties:(_BlastDoorLPImageProperties *)arg1 ;
-(void)setMIMEType:(NSString *)arg1 ;
-(id)_initWithImage:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

