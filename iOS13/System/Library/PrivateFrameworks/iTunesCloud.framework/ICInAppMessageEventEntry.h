/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)params;
-(NSString *)messageIdentifier;
-(NSString *)eventIdentifier;
-(id)initWithMessageIdentifier:(id)arg1 params:(id)arg2 ;
-(id)initWithMessageIdentifier:(id)arg1 params:(id)arg2 eventIdentifier:(id)arg3 ;
@end

