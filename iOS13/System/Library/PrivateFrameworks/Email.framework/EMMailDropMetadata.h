/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDate;

@interface EMMailDropMetadata : NSObject <NSCopying, NSSecureCoding> {

	BOOL _autoArchive;
	BOOL _isInvalid;
	NSString* _fileName;
	long long _fileSize;
	NSString* _mimeType;
	NSURL* _directUrl;
	NSURL* _wrappedUrl;
	NSDate* _expiration;
	unsigned long long _flags;
	NSString* _UUID;

}

@property (nonatomic,copy) NSString * fileName;                     //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) long long fileSize;                    //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                     //@synthesize mimeType=_mimeType - In the implementation block
@property (assign,nonatomic) BOOL autoArchive;                      //@synthesize autoArchive=_autoArchive - In the implementation block
@property (nonatomic,retain) NSURL * directUrl;                     //@synthesize directUrl=_directUrl - In the implementation block
@property (nonatomic,retain) NSURL * wrappedUrl;                    //@synthesize wrappedUrl=_wrappedUrl - In the implementation block
@property (nonatomic,retain) NSDate * expiration;                   //@synthesize expiration=_expiration - In the implementation block
@property (assign,nonatomic) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * UUID;                         //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) BOOL isInvalid;                        //@synthesize isInvalid=_isInvalid - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)mailDropMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)flags;
-(long long)fileSize;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(void)merge:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(BOOL)isExpired;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(NSDate *)expiration;
-(BOOL)isInvalid;
-(NSURL *)directUrl;
-(void)setExpiration:(NSDate *)arg1 ;
-(void)setAutoArchive:(BOOL)arg1 ;
-(void)setIsInvalid:(BOOL)arg1 ;
-(void)setWrappedUrl:(NSURL *)arg1 ;
-(void)setDirectUrl:(NSURL *)arg1 ;
-(BOOL)isBanner;
-(id)directUrlString;
-(BOOL)isPhotoArchive;
-(id)wrappedUrlString;
-(BOOL)autoArchive;
-(NSURL *)wrappedUrl;
-(BOOL)isBannerWithMultiple;
@end

