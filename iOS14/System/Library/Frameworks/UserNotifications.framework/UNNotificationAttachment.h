/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, UNNotificationAttachmentOptions;

@interface UNNotificationAttachment : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSURL* _URL;
	NSString* _type;
	UNNotificationAttachmentOptions* _options;

}

@property (nonatomic,readonly) unsigned long long family; 
@property (nonatomic,copy,readonly) UNNotificationAttachmentOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                        //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attachmentWithIdentifier:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(UNNotificationAttachmentOptions *)options;
-(unsigned long long)family;
-(id)description;
-(NSString *)type;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 URL:(id)arg2 type:(id)arg3 options:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 family:(unsigned long long)arg2 URL:(id)arg3 type:(id)arg4 options:(id)arg5 ;
@end

