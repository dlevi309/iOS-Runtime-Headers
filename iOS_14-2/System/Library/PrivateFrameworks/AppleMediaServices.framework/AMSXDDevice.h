/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AMSXDDevice : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _type;

}

@property (nonatomic,readonly) NSDictionary * JSONDictionary; 
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)deviceFromIdentifier:(id)arg1 ;
+(id)activePairedDevices;
+(id)allPairedDevices;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDeviceID:(id)arg1 type:(long long)arg2 ;
-(NSDictionary *)JSONDictionary;
-(id)initWithJSONDictionary:(id)arg1 ;
-(NSString *)identifier;
@end

