/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSAttributedString, IMPluginPayload, NSString, NSArray;

@interface CKComposition : NSObject {

	BOOL _isFromExternalSource;
	NSAttributedString* _text;
	NSAttributedString* _subject;
	IMPluginPayload* _shelfPluginPayload;
	NSString* _expressiveSendStyleID;

}

@property (nonatomic,readonly) NSArray * pasteboardItems; 
@property (nonatomic,readonly) NSArray * mediaObjects; 
@property (nonatomic,readonly) NSArray * pluginDisplayContainers; 
@property (getter=isTextOnly,nonatomic,readonly) BOOL textOnly; 
@property (getter=isExpirableComposition,nonatomic,readonly) BOOL expirableComposition; 
@property (nonatomic,copy) NSAttributedString * text;                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * subject;                                             //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) IMPluginPayload * shelfPluginPayload;                                     //@synthesize shelfPluginPayload=_shelfPluginPayload - In the implementation block
@property (nonatomic,copy) NSString * expressiveSendStyleID;                                         //@synthesize expressiveSendStyleID=_expressiveSendStyleID - In the implementation block
@property (assign,nonatomic) BOOL isFromExternalSource;                                              //@synthesize isFromExternalSource=_isFromExternalSource - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,readonly) BOOL hasNonwhiteSpaceContent; 
@property (nonatomic,copy,readonly) NSString * previewText; 
@property (getter=isSendAnimated,nonatomic,readonly) BOOL sendAnimated; 
@property (getter=isSaveable,nonatomic,readonly) BOOL saveable; 
+(id)composition;
+(id)compositionForMessageParts:(id)arg1 preserveSubject:(BOOL)arg2 ;
+(id)stickerCompositionWithMediaObjects:(id)arg1 ;
+(id)compositionWithShelfPluginPayload:(id)arg1 ;
+(void)updateComposition:(id*)arg1 fromItemProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)requestCompositionFromItemProviders:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)savedCompositionForGUID:(id)arg1 ;
+(void)deleteCompositionWithGUID:(id)arg1 ;
+(id)compositionFromItemProviders:(id)arg1 ;
+(id)pasteboardTypesForItemProvider:(id)arg1 ;
+(id)__ck_valueForItemClass:(Class)arg1 forItemProvider:(id)arg2 ;
+(BOOL)_shouldCreateMediaObjectForUTIType:(id)arg1 ;
+(id)dataForPasteboardType:(id)arg1 forItemProvider:(id)arg2 ;
+(id)filenameForType:(id)arg1 forItemProvider:(id)arg2 ;
+(id)_transcoderUserInfoFor:(id)arg1 filename:(id)arg2 type:(id)arg3 ;
+(id)pluginDisplayContainerForItemProvider:(id)arg1 ;
+(id)mediaObjectForItemProvider:(id)arg1 ;
+(void)requestPluginDisplayContainerForItemProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)richestMediaTypeForItemProvider:(id)arg1 ;
+(void)requestMediaObjectForItemProvider:(id)arg1 type:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)requestMediaObjectsForAttributedString:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_temporaryURLFromURL:(id)arg1 ;
+(void)requestFilenameForType:(id)arg1 forItemProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)newExpirableCompositionWithText:(id)arg1 subject:(id)arg2 shelfPluginPayload:(id)arg3 ;
+(id)audioCompositionWithMediaObject:(id)arg1 ;
+(id)expirableCompositionWithMediaObject:(id)arg1 ;
+(id)quickImageCompositionWithMediaObject:(id)arg1 ;
+(id)compositionWithMediaObject:(id)arg1 subject:(id)arg2 ;
+(id)compositionWithMSMessage:(id)arg1 appExtensionIdentifier:(id)arg2 ;
+(id)compositionWithPluginDisplayContainer:(id)arg1 subject:(id)arg2 ;
+(id)compositionWithMediaObjects:(id)arg1 subject:(id)arg2 ;
+(id)photoPickerCompositionWithMediaObject:(id)arg1 ;
+(id)photoPickerCompositionWithMediaObjects:(id)arg1 ;
+(id)_savedCompositionForGUID:(id)arg1 readUsingBlock:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)subject;
-(void)setSubject:(NSAttributedString *)arg1 ;
-(BOOL)hasContent;
-(BOOL)isTextOnly;
-(NSString *)expressiveSendStyleID;
-(void)setExpressiveSendStyleID:(NSString *)arg1 ;
-(BOOL)isFromExternalSource;
-(BOOL)isSaveable;
-(Class)balloonViewClass;
-(NSArray *)mediaObjects;
-(NSArray *)pasteboardItems;
-(NSString *)previewText;
-(IMPluginPayload *)shelfPluginPayload;
-(NSArray *)pluginDisplayContainers;
-(id)initWithText:(id)arg1 subject:(id)arg2 shelfPluginPayload:(id)arg3 ;
-(BOOL)isSendAnimated;
-(id)compositionByReplacingMediaObject:(id)arg1 withMediaObject:(id)arg2 ;
-(id)superFormatText:(id*)arg1 ;
-(id)compositionByAppendingComposition:(id)arg1 ;
-(id)compositionByAppendingMediaObjects:(id)arg1 ;
-(id)initWithText:(id)arg1 subject:(id)arg2 ;
-(id)compositionByAppendingText:(id)arg1 ;
-(id)compositionWithExpressiveSendStyleID:(id)arg1 ;
-(BOOL)hasNonwhiteSpaceContent;
-(BOOL)isExpirableComposition;
-(void)saveCompositionWithGUID:(id)arg1 ;
-(id)compositionByAppendingPluginDisplayContainer:(id)arg1 ;
-(id)compositionByAppendingMediaObject:(id)arg1 ;
-(id)messageWithGUID:(id)arg1 ;
-(id)messagesFromCompositionFirstGUIDForMessage:(id)arg1 ;
-(void)setShelfPluginPayload:(IMPluginPayload *)arg1 ;
-(id)_compositionByAppendingText:(id)arg1 isExpirable:(BOOL)arg2 shelfPluginPayload:(id)arg3 ;
-(void)setIsFromExternalSource:(BOOL)arg1 ;
-(id)externalSourceComposition;
-(id)messageWithGUID:(id)arg1 superFormatText:(id)arg2 superFormatSubject:(id)arg3 fileTransferGUIDs:(id)arg4 mediaObjects:(id)arg5 balloonBundleID:(id)arg6 payloadData:(id)arg7 ;
-(id)_compositionParts;
-(id)superFormatSubject;
-(id)superFormatText:(id)arg1 transfterGUIDs:(id*)arg2 mediaObjects:(id*)arg3 ;
-(id)_messageFromPayload:(id)arg1 firstGUID:(id)arg2 ;
-(BOOL)_saveCompositionData:(id)arg1 atURL:(id)arg2 forGUID:(id)arg3 ;
@end

