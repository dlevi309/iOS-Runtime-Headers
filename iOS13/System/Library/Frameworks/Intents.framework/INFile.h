/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INEnumerable.h>
#import <libobjc.A.dylib/INJSONSerializable.h>

@class NSData, NSString, NSURL;

@interface INFile : NSObject <INEnumerable, INJSONSerializable> {

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
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(id)fileWithData:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3 ;
+(id)fileWithFileURL:(id)arg1 filename:(id)arg2 typeIdentifier:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSString *)typeIdentifier;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_deletesFileOnDeallocationIfNeeded;
-(id)_initWithData:(id)arg1 filename:(id)arg2 fileURL:(id)arg3 typeIdentifier:(id)arg4 ;
-(BOOL)_isFileURLBased;
-(BOOL)_hasAssociatedAuditToken;
-(BOOL)_isMarkedForDeletionOnDeallocation;
-(void)_setMarkedForDeletionOnDeallocation:(BOOL)arg1 ;
-(BOOL)_associatedAuditTokenIsEqualToAuditToken:(SCD_Struct_IN2)arg1 ;
-(void)_setAssociatedAuditToken:(SCD_Struct_IN2)arg1 ;
-(void)_setDeletesFileOnDeallocationIfNeeded:(BOOL)arg1 ;
@end

