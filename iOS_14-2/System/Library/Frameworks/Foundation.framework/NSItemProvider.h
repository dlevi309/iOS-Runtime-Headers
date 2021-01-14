/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _NSItemProviderLoading, NSItemProviderDataTransferDelegate;
@class NSMutableDictionary, NSMutableOrderedSet, NSArray, NSUUID, NSString, NSDictionary;

@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying> {

	/*^block*/id _previewImageHandler;
	NSMutableDictionary* _metadata;
	id<_NSItemProviderLoading> _loadOperator;
	NSMutableDictionary* _representationByType;
	NSMutableOrderedSet* _typeOrder;
	NSArray* _representations;
	NSMutableDictionary* _preferredRepresentationByType;
	NSUUID* _UUID;
	NSString* _suggestedName;
	NSString* _sanitizedSuggestedName;
	NSDictionary* _userInfo;
	id<NSItemProviderDataTransferDelegate> _dataTransferDelegate;

}

@property (copy) id previewImageHandler; 
@property (nonatomic,retain) NSMutableDictionary * _representationByType;                       //@synthesize representationByType=_representationByType - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * _typeOrder;                                  //@synthesize typeOrder=_typeOrder - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _preferredRepresentationByType;              //@synthesize preferredRepresentationByType=_preferredRepresentationByType - In the implementation block
@property (retain) id<_NSItemProviderLoading> _loadOperator;                                    //@synthesize loadOperator=_loadOperator - In the implementation block
@property (copy) NSDictionary * userInfo;                                                       //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) NSArray * _representations;                                                //@synthesize representations=_representations - In the implementation block
@property (readonly) NSUUID * _UUID;                                                            //@synthesize UUID=_UUID - In the implementation block
@property (__weak) id<NSItemProviderDataTransferDelegate> dataTransferDelegate;                 //@synthesize dataTransferDelegate=_dataTransferDelegate - In the implementation block
@property (copy,readonly) NSString * _sanitizedSuggestedName;                                   //@synthesize sanitizedSuggestedName=_sanitizedSuggestedName - In the implementation block
@property (copy,readonly) NSArray * registeredTypeIdentifiers; 
@property (copy) NSString * suggestedName;                                                      //@synthesize suggestedName=_suggestedName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)_UUID;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)registerDataRepresentationForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(/*^block*/id)arg3 ;
-(void)_loadItemOfClass:(Class)arg1 withLoadHandler:(/*^block*/id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 visibility:(long long)arg3 loadHandler:(/*^block*/id)arg4 ;
-(void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 visibility:(long long)arg3 loader:(/*^block*/id)arg4 ;
-(id)loadInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addRepresentationType_v2:(id)arg1 preferredRepresentation:(long long)arg2 loader:(/*^block*/id)arg3 ;
-(id)loadFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)userInfo;
-(BOOL)hasRepresentationConformingToTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 ;
-(void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(/*^block*/id)arg3 ;
-(void)_setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)registeredTypeIdentifiersWithFileOptions:(long long)arg1 ;
-(id)_loadObjectOfClass:(Class)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)registerObjectOfClass:(Class)arg1 visibility:(long long)arg2 loadHandler:(/*^block*/id)arg3 ;
-(void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(BOOL)hasItemConformingToTypeIdentifier:(id)arg1 ;
-(void)set_preferredRepresentationByType:(NSMutableDictionary *)arg1 ;
-(id)loadObjectOfClass:(Class)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_hasRepresentationConformingToType:(id)arg1 ;
-(id)_representationConformingToType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableOrderedSet *)_typeOrder;
-(id)_availableTypesWithFilterBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)_preferredRepresentationByType;
-(NSArray *)registeredTypeIdentifiers;
-(NSString *)suggestedName;
-(id<_NSItemProviderLoading>)_loadOperator;
-(id)initWithItem:(id)arg1 typeIdentifier:(id)arg2 ;
-(id)description;
-(void)_commonInitGenerateUUID:(BOOL)arg1 ;
-(void)setDataTransferDelegate:(id<NSItemProviderDataTransferDelegate>)arg1 ;
-(void)set_loadOperator:(id<_NSItemProviderLoading>)arg1 ;
-(void)setSuggestedName:(NSString *)arg1 ;
-(BOOL)_hasRepresentationOfType:(id)arg1 ;
-(void)set_representationByType:(NSMutableDictionary *)arg1 ;
-(id)_availableTypes;
-(id)representations;
-(id<NSItemProviderDataTransferDelegate>)dataTransferDelegate;
-(void)registerObject:(id)arg1 visibility:(long long)arg2 ;
-(void)set_typeOrder:(NSMutableOrderedSet *)arg1 ;
-(NSArray *)_representations;
-(NSMutableDictionary *)_representationByType;
-(id)_metadataValueForKey:(id)arg1 ;
-(BOOL)canLoadObjectOfClass:(Class)arg1 ;
-(id)previewImageHandler;
-(void)_setItemRepresentation:(id)arg1 ;
-(id)_representationForType:(id)arg1 ;
-(NSString *)_sanitizedSuggestedName;
-(void)setPreviewImageHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

