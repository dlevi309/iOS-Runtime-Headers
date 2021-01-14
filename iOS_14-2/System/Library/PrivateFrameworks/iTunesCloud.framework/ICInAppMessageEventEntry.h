/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ICInAppMessageEventEntry : NSObject <NSCopying, NSSecureCoding> {

	NSString* _messageIdentifier;
	NSDictionary* _params;
	NSString* _eventIdentifier;

}

@property (nonatomic,readonly) NSString * messageIdentifier;              //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * params;                     //@synthesize params=_params - In the implementation block
@property (nonatomic,readonly) NSString * eventIdentifier;                //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)eventIdentifier;
-(id)initWithMessageIdentifier:(id)arg1 params:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)messageIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)params;
-(id)initWithMessageIdentifier:(id)arg1 params:(id)arg2 eventIdentifier:(id)arg3 ;
@end

