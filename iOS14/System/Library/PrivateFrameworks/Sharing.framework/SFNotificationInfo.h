/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned long long _homePodType;

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
@property (assign,nonatomic) unsigned long long homePodType;                          //@synthesize homePodType=_homePodType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(unsigned char)interactionDirection;
-(void)setHeader:(NSString *)arg1 ;
-(void)setInteractionDirection:(unsigned char)arg1 ;
-(NSString *)header;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned char)deviceClass;
-(void)setNotificationType:(unsigned)arg1 ;
-(void)setError:(SFNotificationError *)arg1 ;
-(unsigned char)interactionBehavior;
-(SFNotificationError *)error;
-(id)description;
-(void)setInteractionBehavior:(unsigned char)arg1 ;
-(unsigned long long)homePodType;
-(void)setHomePodType:(unsigned long long)arg1 ;
-(SFNotificationInfo *)mediumBubbleVersion;
-(void)setDeviceClass:(unsigned char)arg1 ;
-(NSURL *)attachmentURL;
-(void)setAttachmentURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)notificationType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

