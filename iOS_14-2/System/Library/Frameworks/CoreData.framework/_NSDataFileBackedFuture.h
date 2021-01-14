/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreFoundation/NSData.h>
#import <libobjc.A.dylib/_NSFileBackedFuture.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSUUID, NSData;

@interface _NSDataFileBackedFuture : NSData <_NSFileBackedFuture, NSSecureCoding> {

	NSURL* _fileURL;
	NSURL* _originalFileURL;
	unsigned long long _fileSize;
	NSUUID* _uuid;
	NSData* _realData;
	NSData* _bytes;

}

@property (readonly) NSURL * fileURL; 
@property (readonly) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
@property (readonly) NSUUID * UUID;                            //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)classForKeyedUnarchiver;
-(void*)_bytesPtrForStore;
-(id)initWithStoreMetadata:(id)arg1 directory:(id)arg2 originalFileURL:(id)arg3 ;
-(NSUUID *)UUID;
-(void)_moveToPermanentLocation;
-(const void*)bytes;
-(unsigned long long)fileSize;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(BOOL)_isCloudKitSupportOriginated;
-(NSURL *)fileURL;
-(id)description;
-(id)initWithStoreMetadata:(id)arg1 directory:(id)arg2 ;
-(Class)classForCoder;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_copyToInterimLocation;
-(unsigned long long)_bytesLengthForStore;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

