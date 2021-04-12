/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)message;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 message:(id)arg3 ;
@end

