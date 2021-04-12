/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage, NSURL, NSItemProvider;

@interface SLAttachment : NSObject <NSSecureCoding> {

	/*^block*/id _previewUpdateObserver;
	/*^block*/id _payloadUpdateObserver;
	NSString* _identifier;
	BOOL _startedPayloadLoad;
	BOOL _needsAnotherPreviewGeneration;
	long long _previewType;
	UIImage* _previewImage;
	long long _type;
	id _payload;
	NSURL* _payloadSourceFileURL;
	NSItemProvider* _itemProvider;
	NSString* _typeIdentifier;
	long long _itemProviderPreviewType;
	long long _downsampleStatus;

}

@property (assign,nonatomic) long long downsampleStatus;                       //@synthesize downsampleStatus=_downsampleStatus - In the implementation block
@property (assign,nonatomic) BOOL startedPayloadLoad;                          //@synthesize startedPayloadLoad=_startedPayloadLoad - In the implementation block
@property (assign,nonatomic) BOOL needsAnotherPreviewGeneration;               //@synthesize needsAnotherPreviewGeneration=_needsAnotherPreviewGeneration - In the implementation block
@property (assign) long long previewType;                                      //@synthesize previewType=_previewType - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                           //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id payload;                                         //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSURL * payloadSourceFileURL;                       //@synthesize payloadSourceFileURL=_payloadSourceFileURL - In the implementation block
@property (nonatomic,retain) NSItemProvider * itemProvider;                    //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,copy) NSString * typeIdentifier;                          //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,readonly) long long itemProviderPreviewType;              //@synthesize itemProviderPreviewType=_itemProviderPreviewType - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)attachmentTypeRepresentsAnImage:(long long)arg1 ;
-(void)setPayload:(id)arg1 ;
-(id)init;
-(NSString *)typeIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSItemProvider *)itemProvider;
-(void)setType:(long long)arg1 ;
-(id)payload;
-(id)description;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(id)_uniqueIdentifier;
-(NSURL *)payloadSourceFileURL;
-(id)initWithPayload:(id)arg1 type:(long long)arg2 previewImage:(id)arg3 ;
-(void)setPreviewType:(long long)arg1 ;
-(void)setDownsampleStatus:(long long)arg1 ;
-(long long)previewType;
-(long long)downsampleStatus;
-(void)setPreviewUpdateObserverWithBlock:(/*^block*/id)arg1 ;
-(void)setPayloadUpdateObserverWithBlock:(/*^block*/id)arg1 ;
-(void)setPayloadSourceFileURL:(NSURL *)arg1 ;
-(long long)itemProviderPreviewType;
-(BOOL)startedPayloadLoad;
-(void)setStartedPayloadLoad:(BOOL)arg1 ;
-(BOOL)needsAnotherPreviewGeneration;
-(void)setNeedsAnotherPreviewGeneration:(BOOL)arg1 ;
@end

