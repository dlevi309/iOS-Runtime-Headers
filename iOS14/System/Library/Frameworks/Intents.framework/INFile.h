/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INEnumerable.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSURL;

@interface INFile : NSObject <INEnumerable, INJSONSerializable, NSSecureCoding> {

	NSData* _memoryMappedFileData;
	BOOL _deletesFileOnDeallocationIfNeeded;
	NSData* _data;
	NSString* _filename;
	NSURL* _fileURL;
	NSString* _typeIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL _hasAssociatedAuditToken; 
@property (assign,setter=_setMarkedForDeletionOnDeallocation:,getter=_isMarkedForDeletionOnDeallocation,nonatomic) BOOL _markedForDeletionOnDeallocation; 
@property (assign,setter=_setDeletesFileOnDeallocationIfNeeded:,nonatomic) BOOL _deletesFileOnDeallocationIfNeeded;                                                    //@synthesize deletesFileOnDeallocationIfNeeded=_deletesFileOnDeallocationIfNeeded - In the implementation block
@property (nonatomic,readonly) BOOL _isFileURLBased; 
@property (nonatomic,copy,readonly) NSData * data;                                                                                                                     //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * filename;                                                                                                                        //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeIdentifier;                                                                                                         //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                                                                                                        //@synthesize fileURL=_fileURL - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)fileWithData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3 ;
+(id)fileWithFileURL:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3 ;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)_deletesFileOnDeallocationIfNeeded;
-(id)_initWithData:(id)arg1 filename:(id)arg2 fileURL:(id)arg3 typeIdentifier:(id)arg4 ;
-(BOOL)_isFileURLBased;
-(BOOL)_hasAssociatedAuditToken;
-(BOOL)_isMarkedForDeletionOnDeallocation;
-(void)_setMarkedForDeletionOnDeallocation:(BOOL)arg1 ;
-(BOOL)_associatedAuditTokenIsEqualToAuditToken:(SCD_Struct_IN2)arg1 ;
-(void)_setAssociatedAuditToken:(SCD_Struct_IN2)arg1 ;
-(void)_setDeletesFileOnDeallocationIfNeeded:(BOOL)arg1 ;
-(NSString *)typeIdentifier;
-(NSString *)filename;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSURL *)fileURL;
-(void)setFilename:(NSString *)arg1 ;
-(NSData *)data;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

