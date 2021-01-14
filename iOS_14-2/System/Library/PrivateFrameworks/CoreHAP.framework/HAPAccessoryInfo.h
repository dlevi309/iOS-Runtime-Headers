/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber;

@interface HAPAccessoryInfo : HMFObject {

	BOOL _authenticated;
	NSString* _name;
	NSString* _modelName;
	NSString* _manufacturer;
	NSNumber* _category;
	NSString* _certificationStatus;
	NSString* _blacklisted;
	NSString* _ppid;

}

@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * modelName;                        //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,readonly) NSString * manufacturer;                     //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) NSNumber * category;                         //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * certificationStatus;              //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (nonatomic,readonly) NSString * blacklisted;                      //@synthesize blacklisted=_blacklisted - In the implementation block
@property (nonatomic,readonly) NSString * ppid;                             //@synthesize ppid=_ppid - In the implementation block
@property (nonatomic,readonly) BOOL authenticated;                          //@synthesize authenticated=_authenticated - In the implementation block
-(NSString *)ppid;
-(NSString *)manufacturer;
-(NSNumber *)category;
-(NSString *)modelName;
-(BOOL)authenticated;
-(NSString *)name;
-(id)description;
-(BOOL)isBlacklisted;
-(NSString *)certificationStatus;
-(BOOL)isCertified;
-(id)initWithName:(id)arg1 manufacturer:(id)arg2 modelName:(id)arg3 category:(id)arg4 certificationStatus:(id)arg5 blacklisted:(id)arg6 ppid:(id)arg7 ;
-(NSString *)blacklisted;
@end

