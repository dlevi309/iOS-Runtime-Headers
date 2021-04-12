/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 options:(unsigned long long)arg4 ;
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSURL *)url;
-(NSString *)title;
-(id)_description;
-(NSString *)textInputButtonTitle;
-(id)_initWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 url:(id)arg6 ;
-(NSString *)textInputPlaceholder;
@end

