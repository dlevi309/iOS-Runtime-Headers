/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)allPairedDevices;
+(id)activePairedDevices;
+(id)deviceFromIdentifier:(id)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithDeviceID:(id)arg1 type:(long long)arg2 ;
-(NSDictionary *)JSONDictionary;
@end

