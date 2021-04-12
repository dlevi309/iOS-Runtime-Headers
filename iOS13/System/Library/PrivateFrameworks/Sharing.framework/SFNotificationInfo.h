/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, SFNotificationError;

@interface SFNotificationInfo : NSObject <NSSecureCoding, NSCopying> {

	SFNotificationInfo* _cachedMediumBubbleVersion;
	unsigned char _deviceClass;
	unsigned char _interactionBehavior;
	unsigned char _interactionDirection;
	unsigned _notificationType;
	NSURL* _attachmentURL;
	NSString* _body;
	SFNotificationError* _error;
	NSString* _header;
	NSString* _title;

}

@property (nonatomic,readonly) SFNotificationInfo * mediumBubbleVersion; 
@property (assign,nonatomic) unsigned notificationType;                               //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,retain) NSURL * attachmentURL;                                   //@synthesize attachmentURL=_attachmentURL - In the implementation block
@property (nonatomic,retain) NSString * body;                                         //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) unsigned char deviceClass;                               //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,retain) SFNotificationError * error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * header;                                       //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) unsigned char interactionBehavior;                       //@synthesize interactionBehavior=_interactionBehavior - In the implementation block
@property (assign,nonatomic) unsigned char interactionDirection;                      //@synthesize interactionDirection=_interactionDirection - In the implementation block
@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFNotificationError *)error;
-(void)setError:(SFNotificationError *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned char)deviceClass;
-(NSString *)header;
-(unsigned char)interactionBehavior;
-(void)setHeader:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(void)setNotificationType:(unsigned)arg1 ;
-(unsigned)notificationType;
-(NSURL *)attachmentURL;
-(void)setAttachmentURL:(NSURL *)arg1 ;
-(void)setDeviceClass:(unsigned char)arg1 ;
-(void)setInteractionBehavior:(unsigned char)arg1 ;
-(unsigned char)interactionDirection;
-(void)setInteractionDirection:(unsigned char)arg1 ;
-(SFNotificationInfo *)mediumBubbleVersion;
@end

