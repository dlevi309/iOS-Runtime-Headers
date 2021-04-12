/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CTPlan.h>

@class NSString;

@interface CTRemoteBlacklistPlan : CTPlan {

	NSString* _key;
	NSString* _blacklistIMEI;
	NSString* _blacklistEID;
	NSString* _blacklistICCID;
	NSString* _uploaderIMEI;
	NSString* _uploaderEID;

}

@property (nonatomic,readonly) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * blacklistIMEI;               //@synthesize blacklistIMEI=_blacklistIMEI - In the implementation block
@property (nonatomic,readonly) NSString * blacklistEID;                //@synthesize blacklistEID=_blacklistEID - In the implementation block
@property (nonatomic,readonly) NSString * blacklistICCID;              //@synthesize blacklistICCID=_blacklistICCID - In the implementation block
@property (nonatomic,readonly) NSString * uploaderIMEI;                //@synthesize uploaderIMEI=_uploaderIMEI - In the implementation block
@property (nonatomic,readonly) NSString * uploaderEID;                 //@synthesize uploaderEID=_uploaderEID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithkey:(id)arg1 blacklistIMEI:(id)arg2 blacklistEID:(id)arg3 blacklistICCID:(id)arg4 uploaderIMEI:(id)arg5 uploaderEID:(id)arg6 ;
-(NSString *)uploaderEID;
-(NSString *)blacklistIMEI;
-(NSString *)blacklistEID;
-(NSString *)uploaderIMEI;
-(NSString *)blacklistICCID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

