/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface UNNotificationAction : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	unsigned long long _options;
	NSString* _textInputButtonTitle;
	NSString* _textInputPlaceholder;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * textInputButtonTitle;              //@synthesize textInputButtonTitle=_textInputButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * textInputPlaceholder;              //@synthesize textInputPlaceholder=_textInputPlaceholder - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                        //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 ;
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 ;
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 options:(unsigned long long)arg4 ;
-(id)_description;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(NSURL *)url;
-(id)description;
-(NSString *)textInputPlaceholder;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)textInputButtonTitle;
-(NSString *)identifier;
-(id)_initWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 url:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

