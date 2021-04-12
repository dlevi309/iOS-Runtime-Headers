/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FusionPluginServices.framework/FusionPluginServices
*/

#import <FusionPluginServices/FusionPluginServices-Structs.h>
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)messageStr;
-(NSDictionary *)messageDict;
-(id)initWithName:(id)arg1 request:(id)arg2 ;
@end

