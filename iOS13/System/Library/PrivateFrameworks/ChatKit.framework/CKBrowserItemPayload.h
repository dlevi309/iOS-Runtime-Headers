/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <IMCore/IMPluginPayload.h>

@protocol CKPluginEntryViewController;
@class NSURL, UIViewController, NSString, NSDictionary, CKMediaObject;

@interface CKBrowserItemPayload : IMPluginPayload {

	BOOL _requiresValidation;
	BOOL _useDirectSend;
	NSURL* _videoComplementFileURL;
	UIViewController*<CKPluginEntryViewController> _photoShelfViewController;
	NSURL* _fileURL;
	NSString* _filename;
	NSDictionary* _attributionInfo;
	CKMediaObject* _mediaObject;

}

@property (nonatomic,retain) NSURL * videoComplementFileURL;                                                       //@synthesize videoComplementFileURL=_videoComplementFileURL - In the implementation block
@property (nonatomic,retain) UIViewController*<CKPluginEntryViewController> photoShelfViewController;              //@synthesize photoShelfViewController=_photoShelfViewController - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSString * filename;                                                                  //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) NSDictionary * attributionInfo;                                                       //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (nonatomic,retain) CKMediaObject * mediaObject;                                                          //@synthesize mediaObject=_mediaObject - In the implementation block
@property (assign,nonatomic) BOOL requiresValidation;                                                              //@synthesize requiresValidation=_requiresValidation - In the implementation block
@property (assign,nonatomic) BOOL useDirectSend;                                                                   //@synthesize useDirectSend=_useDirectSend - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)browserItemFromSticker:(id)arg1 ;
+(id)browserItemPayloadFromIMPluginPayload:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSDictionary *)attributionInfo;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(id)transcoderUserInfo;
-(CKMediaObject *)mediaObject;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(id)mediaObjectFromPayload;
-(BOOL)shouldSendAsMediaObject;
-(BOOL)useDirectSend;
-(BOOL)requiresValidation;
-(UIViewController*<CKPluginEntryViewController>)photoShelfViewController;
-(BOOL)isEqualToPluginPayload:(id)arg1 ;
-(void)setPhotoShelfViewController:(UIViewController*<CKPluginEntryViewController>)arg1 ;
-(void)setUseDirectSend:(BOOL)arg1 ;
-(BOOL)shouldSendAsRichLink;
-(NSURL *)videoComplementFileURL;
-(void)setVideoComplementFileURL:(NSURL *)arg1 ;
-(void)setRequiresValidation:(BOOL)arg1 ;
-(BOOL)shouldSendAsText;
-(id)__ck_urlFromTextBodyForRichLink;
@end

