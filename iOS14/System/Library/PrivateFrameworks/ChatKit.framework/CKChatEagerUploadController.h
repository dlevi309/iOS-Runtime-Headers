/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSMutableDictionary, NSMutableArray;

@interface CKChatEagerUploadController : NSObject {

	NSMutableDictionary* _identifierMap;
	NSMutableArray* _uploadUrls;
	NSMutableDictionary* _temporaryURLS;

}

@property (nonatomic,retain) NSMutableDictionary * identifierMap;              //@synthesize identifierMap=_identifierMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * uploadUrls;                      //@synthesize uploadUrls=_uploadUrls - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * temporaryURLS;              //@synthesize temporaryURLS=_temporaryURLS - In the implementation block
-(id)init;
-(void)cancelURL:(id)arg1 ;
-(void)removeTemporaryURLForURL:(id)arg1 ;
-(void)setIdentifierMap:(NSMutableDictionary *)arg1 ;
-(void)_uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6 recipients:(id)arg7 ;
-(id)_newTransferForURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 ;
-(NSMutableDictionary *)identifierMap;
-(void)addURLToIdentifierMap:(id)arg1 forIdentifier:(id)arg2 ;
-(void)asyncCopyFileAtURL:(id)arg1 toDestinationURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUploadUrls:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)temporaryURLS;
-(void)setTemporaryURLS:(NSMutableDictionary *)arg1 ;
-(void)cancelAll;
-(void)didSendComposition;
-(void)cancelIdentifier:(id)arg1 ;
-(void)uploadPayload:(id)arg1 identifier:(id)arg2 replace:(BOOL)arg3 recipients:(id)arg4 ;
-(void)uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6 recipients:(id)arg7 ;
-(NSMutableArray *)uploadUrls;
@end

