/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSString, NSURL, NSDictionary, NSNumber;

@interface UNSAttachmentRecord : NSObject {

	BOOL _thumbnailHidden;
	BOOL _hiddenFromDefaultExpandedView;
	NSString* _identifier;
	NSURL* _URL;
	NSString* _type;
	NSDictionary* _thumbnailClippingRect;
	NSNumber* _thumbnailFrameNumber;
	NSDictionary* _thumbnailTimestamp;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL thumbnailHidden;                            //@synthesize thumbnailHidden=_thumbnailHidden - In the implementation block
@property (nonatomic,copy) NSDictionary * thumbnailClippingRect;              //@synthesize thumbnailClippingRect=_thumbnailClippingRect - In the implementation block
@property (nonatomic,copy) NSNumber * thumbnailFrameNumber;                   //@synthesize thumbnailFrameNumber=_thumbnailFrameNumber - In the implementation block
@property (nonatomic,copy) NSDictionary * thumbnailTimestamp;                 //@synthesize thumbnailTimestamp=_thumbnailTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hiddenFromDefaultExpandedView;              //@synthesize hiddenFromDefaultExpandedView=_hiddenFromDefaultExpandedView - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(id)description;
-(BOOL)thumbnailHidden;
-(BOOL)hiddenFromDefaultExpandedView;
-(NSString *)type;
-(NSURL *)URL;
-(unsigned long long)hash;
-(void)setThumbnailHidden:(BOOL)arg1 ;
-(void)setHiddenFromDefaultExpandedView:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)thumbnailClippingRect;
-(NSDictionary *)thumbnailTimestamp;
-(NSNumber *)thumbnailFrameNumber;
-(void)setThumbnailClippingRect:(NSDictionary *)arg1 ;
-(void)setThumbnailFrameNumber:(NSNumber *)arg1 ;
-(void)setThumbnailTimestamp:(NSDictionary *)arg1 ;
@end

