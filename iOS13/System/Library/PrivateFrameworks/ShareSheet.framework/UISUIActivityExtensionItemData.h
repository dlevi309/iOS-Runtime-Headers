/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface UISUIActivityExtensionItemData : NSObject <NSSecureCoding> {

	NSArray* _extensionItems;
	NSDictionary* _openURLAnnotationsByURL;
	CFDictionaryRef _itemProviderOrExtensionItemWithMetadataToUUID;
	NSMutableDictionary* _attachmentNamesByItemUUID;
	NSMutableDictionary* _subjectsByItemUUID;
	NSMutableDictionary* _previewImagesByItemUUID;
	NSMutableDictionary* _previewImageDataByItemUUID;
	NSMutableDictionary* _dataTypesByItemUUID;

}

@property (nonatomic,readonly) CFDictionaryRef itemProviderOrExtensionItemWithMetadataToUUID;              //@synthesize itemProviderOrExtensionItemWithMetadataToUUID=_itemProviderOrExtensionItemWithMetadataToUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * attachmentNamesByItemUUID;                            //@synthesize attachmentNamesByItemUUID=_attachmentNamesByItemUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * subjectsByItemUUID;                                   //@synthesize subjectsByItemUUID=_subjectsByItemUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * previewImagesByItemUUID;                              //@synthesize previewImagesByItemUUID=_previewImagesByItemUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * previewImageDataByItemUUID;                           //@synthesize previewImageDataByItemUUID=_previewImageDataByItemUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dataTypesByItemUUID;                                  //@synthesize dataTypesByItemUUID=_dataTypesByItemUUID - In the implementation block
@property (nonatomic,retain) NSArray * extensionItems;                                                     //@synthesize extensionItems=_extensionItems - In the implementation block
@property (nonatomic,retain) NSDictionary * openURLAnnotationsByURL;                                       //@synthesize openURLAnnotationsByURL=_openURLAnnotationsByURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_extensionItemsByPreparingToSendExtensionItems:(id)arg1 toDestinationExtension:(id)arg2 ;
+(id)_onBackgroundQueue_extensionItemsByPreparingToSendExtensionItems:(id)arg1 toDestinationExtension:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setExtensionItems:(NSArray *)arg1 ;
-(void)addAttachmentName:(id)arg1 forItem:(id)arg2 ;
-(void)addSubject:(id)arg1 forItem:(id)arg2 ;
-(void)addPreviewImageData:(id)arg1 forItem:(id)arg2 ;
-(void)addPreviewImage:(id)arg1 forItem:(id)arg2 ;
-(void)addDataType:(id)arg1 forItem:(id)arg2 ;
-(void)setOpenURLAnnotationsByURL:(NSDictionary *)arg1 ;
-(void)prepareForSendingToExtension:(id)arg1 ;
-(NSDictionary *)openURLAnnotationsByURL;
-(id)attachmentNameForItem:(id)arg1 ;
-(id)subjectForItem:(id)arg1 ;
-(id)previewImageForItem:(id)arg1 ;
-(id)previewImageDataForItem:(id)arg1 ;
-(id)dataTypeForItem:(id)arg1 ;
-(NSArray *)extensionItems;
-(void)_loadItemProviderOrExtensionItemWithMetadataToUUIDFromTemporaryUUIDMappingAttachedToExtensionItems:(id)arg1 ;
-(void)_removeTemporaryUUIDMappingAttachmentFromExtensionItems:(id)arg1 ;
-(NSMutableDictionary *)attachmentNamesByItemUUID;
-(NSMutableDictionary *)subjectsByItemUUID;
-(NSMutableDictionary *)previewImagesByItemUUID;
-(NSMutableDictionary *)previewImageDataByItemUUID;
-(NSMutableDictionary *)dataTypesByItemUUID;
-(void)_appendTemporaryUUIDMappingAttachmentToExtensionItem:(id)arg1 ;
-(id)_getItemUUIDForItem:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_changeUUIDMappingFromExtensionItems:(id)arg1 toClonedExtensionItems:(id)arg2 ;
-(void)_setItemUUID:(id)arg1 forItem:(id)arg2 ;
-(id)_uuidMappingDataForTemporaryAttachmentToExtensionItem:(id)arg1 attachments:(id)arg2 ;
-(id)allDataTypes;
-(void)prepareForSendingAsCompletionToHostWithAuditToken:(SCD_Struct_UI7)arg1 ;
-(CFDictionaryRef)itemProviderOrExtensionItemWithMetadataToUUID;
@end

