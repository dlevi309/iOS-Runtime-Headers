/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <WiFiPeerToPeer/WiFiPeerToPeer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface WiFiAwarePublishServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying> {

	NSData* _blob;
	NSData* _txtRecordData;
	NSString* _instanceName;

}

@property (nonatomic,copy) NSData * blob;                        //@synthesize blob=_blob - In the implementation block
@property (nonatomic,copy) NSData * txtRecordData;               //@synthesize txtRecordData=_txtRecordData - In the implementation block
@property (nonatomic,copy) NSString * instanceName;              //@synthesize instanceName=_instanceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)blob;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setTxtRecordData:(NSData *)arg1 ;
-(void)setInstanceName:(NSString *)arg1 ;
-(NSData *)txtRecordData;
-(NSString *)instanceName;
-(id)initWithCoder:(id)arg1 ;
-(void)setBlob:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)blobEquals:(id)arg1 ;
-(BOOL)txtRecordEquals:(id)arg1 ;
-(BOOL)instanceNameEquals:(id)arg1 ;
@end

