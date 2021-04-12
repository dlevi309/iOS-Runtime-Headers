/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
@class NSString, NSURL, NSNumber;

@interface UNSAttachmentRecord : NSObject {

	BOOL _thumbnailHidden;
	BOOL _hiddenFromDefaultExpandedView;
	NSString* _identifier;
	unsigned long long _family;
	NSURL* _URL;
	NSString* _type;
	NSNumber* _thumbnailFrameNumber;
	SCD_Struct_UN1 _thumbnailTimestamp;
	CGRect _thumbnailClippingRect;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long family;                       //@synthesize family=_family - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL thumbnailHidden;                            //@synthesize thumbnailHidden=_thumbnailHidden - In the implementation block
@property (assign,nonatomic) CGRect thumbnailClippingRect;                    //@synthesize thumbnailClippingRect=_thumbnailClippingRect - In the implementation block
@property (nonatomic,copy) NSNumber * thumbnailFrameNumber;                   //@synthesize thumbnailFrameNumber=_thumbnailFrameNumber - In the implementation block
@property (assign,nonatomic) SCD_Struct_UN1 thumbnailTimestamp;               //@synthesize thumbnailTimestamp=_thumbnailTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hiddenFromDefaultExpandedView;              //@synthesize hiddenFromDefaultExpandedView=_hiddenFromDefaultExpandedView - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(unsigned long long)family;
-(void)setFamily:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(CGRect)thumbnailClippingRect;
-(SCD_Struct_UN1)thumbnailTimestamp;
-(BOOL)thumbnailHidden;
-(NSNumber *)thumbnailFrameNumber;
-(BOOL)hiddenFromDefaultExpandedView;
-(void)setThumbnailHidden:(BOOL)arg1 ;
-(void)setThumbnailClippingRect:(CGRect)arg1 ;
-(void)setThumbnailFrameNumber:(NSNumber *)arg1 ;
-(void)setHiddenFromDefaultExpandedView:(BOOL)arg1 ;
-(void)setThumbnailTimestamp:(SCD_Struct_UN1)arg1 ;
@end

