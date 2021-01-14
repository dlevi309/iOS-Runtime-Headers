/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)browserItemPayloadFromIMPluginPayload:(id)arg1 ;
+(id)browserItemFromSticker:(id)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(id)transcoderUserInfo;
-(id)mediaObjectFromPayload;
-(BOOL)shouldSendAsMediaObject;
-(NSString *)filename;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)useDirectSend;
-(UIViewController*<CKPluginEntryViewController>)photoShelfViewController;
-(BOOL)isEqualToPluginPayload:(id)arg1 ;
-(BOOL)requiresValidation;
-(NSURL *)fileURL;
-(BOOL)shouldSendAsRichLink;
-(NSURL *)videoComplementFileURL;
-(void)setVideoComplementFileURL:(NSURL *)arg1 ;
-(void)setRequiresValidation:(BOOL)arg1 ;
-(BOOL)shouldSendAsText;
-(id)__ck_urlFromTextBodyForRichLink;
-(void)setFilename:(NSString *)arg1 ;
-(CKMediaObject *)mediaObject;
-(NSDictionary *)attributionInfo;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPhotoShelfViewController:(UIViewController*<CKPluginEntryViewController>)arg1 ;
-(void)setUseDirectSend:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

