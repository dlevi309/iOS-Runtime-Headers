/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSMutableDictionary, NSArray, NSDictionary;

@interface CKMediaObjectManager : NSObject {

	NSMutableDictionary* _transfers;
	NSArray* _classes;
	NSDictionary* _UTITypes;
	NSDictionary* _dynTypes;

}

@property (nonatomic,copy) NSArray * classes;                              //@synthesize classes=_classes - In the implementation block
@property (nonatomic,copy) NSDictionary * UTITypes;                        //@synthesize UTITypes=_UTITypes - In the implementation block
@property (nonatomic,copy) NSDictionary * dynTypes;                        //@synthesize dynTypes=_dynTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transfers;              //@synthesize transfers=_transfers - In the implementation block
+(id)sharedInstance;
-(id)fileManager;
-(void)setTransfers:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)UTITypeForFilename:(id)arg1 ;
-(NSDictionary *)dynTypes;
-(void)setUTITypes:(NSDictionary *)arg1 ;
-(void)setDynTypes:(NSDictionary *)arg1 ;
-(void)transferRemoved:(id)arg1 ;
-(id)UTITypeForExtension:(id)arg1 ;
-(id)transferWithTransferGUID:(id)arg1 imMessage:(id)arg2 ;
-(id)transferWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(BOOL)arg4 ;
-(Class)transferClass;
-(id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 attributionInfo:(id)arg4 hideAttachment:(BOOL)arg5 ;
-(id)transferWithStickerFileURL:(id)arg1 transferUserInfo:(id)arg2 attributionInfo:(id)arg3 ;
-(id)mediaObjectWithTransferGUID:(id)arg1 imMessage:(id)arg2 parentChatIsSpam:(BOOL)arg3 ;
-(id)mediaObjectWithSticker:(id)arg1 stickerUserInfo:(id)arg2 ;
-(NSArray *)classes;
-(id)mediaObjectWithTransferGUID:(id)arg1 imMessage:(id)arg2 ;
-(id)allUTITypes;
-(Class)classForUTIType:(id)arg1 ;
-(id)mediaObjectWithData:(id)arg1 UTIType:(id)arg2 filename:(id)arg3 transcoderUserInfo:(id)arg4 ;
-(id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 ;
-(NSMutableDictionary *)transfers;
-(NSDictionary *)UTITypes;
-(Class)classForFilename:(id)arg1 ;
-(void)setClasses:(NSArray *)arg1 ;
-(void)dealloc;
@end

