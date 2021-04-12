/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface SecureChannelAction : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _message;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)message;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(id)initWithURL:(id)arg1 title:(id)arg2 message:(id)arg3 ;
@end

