/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long fileSize;                   //@synthesize fileSize=_fileSize - In the implementation block
@property (readonly) NSUUID * UUID;                                 //@synthesize uuid=_uuid - In the implementation block
@property (retain,readonly) NSURL * _fileURLForSaving; 
@property (retain) NSURL * originalFileURL;                         //@synthesize originalFileURL=_originalFileURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)classForKeyedUnarchiver;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(const void*)bytes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(Class)classForArchiver;
-(unsigned long long)fileSize;
-(NSUUID *)UUID;
-(NSURL *)fileURL;
-(id)initWithStoreMetadata:(id)arg1 directory:(id)arg2 ;
-(id)_storeMetadata;
-(void*)_bytesPtrForStore;
-(unsigned long long)_bytesLengthForStore;
-(id)initWithStoreMetadata:(id)arg1 directory:(id)arg2 originalFileURL:(id)arg3 ;
-(NSURL *)originalFileURL;
-(NSURL *)_fileURLForSaving;
-(BOOL)_isCloudKitSupportOriginated;
-(id)initWithURL:(id)arg1 UUID:(id)arg2 size:(unsigned long long)arg3 ;
-(id)initWithDirectoryURL:(id)arg1 UUID:(id)arg2 originalURL:(id)arg3 ;
-(id)initWithURLForSaving:(id)arg1 ;
-(BOOL)_evictFile:(id*)arg1 ;
-(id)fileURLNoReally;
-(id)_interimLocationURL;
-(id)_underlyingData;
-(void)_setStoreMetadata:(id)arg1 ;
-(void)_copyToInterimLocation;
-(void)_moveToPermanentLocation;
-(void)setOriginalFileURL:(NSURL *)arg1 ;
@end

