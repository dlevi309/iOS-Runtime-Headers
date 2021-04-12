/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned long long _family;
	UNNotificationAttachmentOptions* _options;

}

@property (nonatomic,readonly) unsigned long long family;                                   //@synthesize family=_family - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationAttachmentOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                        //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_systemDirectoryURL;
+(unsigned long long)stagingActionForAttachmentURL:(id)arg1 bundleProxy:(id)arg2 error:(id*)arg3 ;
+(id)attachmentWithIdentifier:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UNNotificationAttachmentOptions *)options;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSURL *)URL;
-(unsigned long long)family;
-(id)initWithIdentifier:(id)arg1 family:(unsigned long long)arg2 URL:(id)arg3 type:(id)arg4 options:(id)arg5 ;
@end

