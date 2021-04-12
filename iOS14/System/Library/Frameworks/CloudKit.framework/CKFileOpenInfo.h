/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSFileHandle;

@interface CKFileOpenInfo : NSObject <NSSecureCoding> {

	BOOL _shouldReadRawEncryptedData;
	NSString* _UUID;
	NSString* _path;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;
	NSFileHandle* _clientOpenedFileHandle;

}

@property (nonatomic,retain) NSString * UUID;                                    //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * path;                                    //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                                  //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                            //@synthesize generationID=_generationID - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;                    //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
@property (nonatomic,retain) NSFileHandle * clientOpenedFileHandle;              //@synthesize clientOpenedFileHandle=_clientOpenedFileHandle - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)deviceID;
-(NSString *)UUID;
-(NSNumber *)generationID;
-(NSNumber *)fileID;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(id)description;
-(BOOL)shouldReadRawEncryptedData;
-(id)initWithCoder:(id)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(void)setFileID:(NSNumber *)arg1 ;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(NSFileHandle *)clientOpenedFileHandle;
-(void)setClientOpenedFileHandle:(NSFileHandle *)arg1 ;
@end

