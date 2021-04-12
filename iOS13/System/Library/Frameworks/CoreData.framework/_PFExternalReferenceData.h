/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(Class)classForKeyedUnarchiver;
+(BOOL)_updateFileDescriptorsInUseReserveNew:(BOOL)arg1 ;
+(BOOL)_releaseReservedMapFileDescriptor;
+(BOOL)_reserveMapFileDescriptor;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(const void*)bytes;
-(id)copy;
-(id)mutableCopy;
-(void)finalize;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(Class)classForCoder;
-(id)subdataWithRange:(NSRange)arg1 ;
-(Class)classForArchiver;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)UUID;
-(id)filename;
-(id)initWithStoreBytes:(const void*)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ;
-(id)initWithStoreBytes:(const void*)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5 ubiquitousLocation:(id)arg6 ;
-(BOOL)hasExternalReferenceContent;
-(const char*)_externalReferenceLocation;
-(id)_originalData;
-(const char*)_safeguardLocation;
-(int)preferredProtectionLevel;
-(unsigned long long)_bytesLengthForExternalReference;
-(void)doCleanupOnDealloc;
-(id)_safeguardLocationString;
-(id)externalReferenceLocationString;
-(id)databaseValue;
-(const void*)_bytesPtrForStore;
-(unsigned long long)_bytesLengthForStore;
-(id)constructSafeguardStringFromString:(id)arg1 ;
-(void)_doCleanup;
-(const void*)_bytesPtrForExternalReference;
-(BOOL)_attemptToMapData:(id*)arg1 ;
-(id)_exceptionForReadError:(id)arg1 ;
-(const void*)_retrieveExternalData;
-(BOOL)_isEqualHelper:(id)arg1 ;
-(id)initForUbiquityDictionary:(id)arg1 store:(id)arg2 ;
-(id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4 ;
-(void)_setBytesForExternalReference:(const void*)arg1 ;
-(void)_writeExternalReferenceToInterimLocation;
-(void)_moveExternalReferenceToPermanentLocation;
-(void)_deleteExternalReferenceFromPermanentLocation;
-(id)_externalReferenceLocationString;
-(BOOL)_createdByUbiquityImport;
@end

