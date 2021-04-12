/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FusionPluginKit.framework/FusionPluginKit
*/

#import <FusionPluginKit/FusionPluginKit-Structs.h>
#import <FusionPluginKit/HSMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface HSMessageRequest : HSMessage <NSSecureCoding, NSCopying> {

	NSString* _messageStr;
	NSDictionary* _messageDict;

}

@property (nonatomic,readonly) NSString * messageStr;                   //@synthesize messageStr=_messageStr - In the implementation block
@property (nonatomic,readonly) NSDictionary * messageDict;              //@synthesize messageDict=_messageDict - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)messageStr;
-(NSDictionary *)messageDict;
-(id)initWithName:(id)arg1 request:(id)arg2 ;
@end

