/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData, NSString;

@interface _PFExternalReferenceData : NSData {

	NSData* _originalData;
	void* _bytesPtrForStore;
	unsigned long long _bytesLengthForStore;
	void* _bytesPtrForExternalReference;
	unsigned long long _bytesLengthForExternalReference;
	NSString* _externalReferenceLocation;
	NSString* _safeguardLocation;
	id _ubiquitousLocation;
	struct {
		unsigned _isStoredExternally : 1;
		unsigned _hasMappedData : 1;
		unsigned _cleanupOnDealloc : 1;
		unsigned _dataProtectionLevel : 3;
		unsigned _isStoredUbiquitously : 1;
		unsigned _createdByUbiquityImport : 1;
		unsigned _reserved : 24;
	}  _externalDataFlags;

}
+(BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)arg1 ;
+(BOOL)_releaseReservedMapFileDescriptor;
+(BOOL)_reserveMapFileDescriptor;
+(Class)classForKeyedUnarchiver;
-(const void*)_bytesPtrForStore;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)initWithStoreBytes:(const void*)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ubiquitousLocation:(id)arg6 ;
-(id)UUID;
-(id)subdataWithRange:(NSRange)arg1 ;
-(void)finalize;
-(id)databaseValue;
-(id)mutableCopy;
-(const void*)bytes;
-(unsigned long long)length;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(const void*)_bytesPtrForExternalReference;
-(id)initForUbiquityDictionary:(id)arg1 store:(id)arg2 ;
-(BOOL)_createdByUbiquityImport;
-(id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4 ;
-(void)_setBytesForExternalReference:(const void*)arg1 ;
-(void)_writeExternalReferenceToInterimLocation;
-(void)_moveExternalReferenceToPermanentLocation;
-(void)_deleteExternalReferenceFromPermanentLocation;
-(id)description;
-(Class)classForCoder;
-(id)copy;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)initWithStoreBytes:(const void*)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ;
-(BOOL)hasExternalReferenceContent;
-(const char*)_externalReferenceLocation;
-(id)_originalData;
-(const char*)_safeguardLocation;
-(int)preferredProtectionLevel;
-(unsigned long long)_bytesLengthForExternalReference;
-(void)doCleanupOnDealloc;
-(id)_safeguardLocationString;
-(id)externalReferenceLocationString;
-(unsigned long long)_bytesLengthForStore;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

