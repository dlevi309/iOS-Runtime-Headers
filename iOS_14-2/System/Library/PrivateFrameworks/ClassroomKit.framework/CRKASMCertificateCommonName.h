/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString, NSUUID;

@interface CRKASMCertificateCommonName : NSObject {

	NSString* _userIdentifier;
	NSString* _prefix;
	NSUUID* _UUID;

}

@property (nonatomic,copy,readonly) NSString * prefix;                      //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                               //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)commonNameWithString:(id)arg1 ;
-(NSString *)userIdentifier;
-(NSUUID *)UUID;
-(NSString *)prefix;
-(NSString *)stringValue;
-(id)description;
-(id)initWithPrefix:(id)arg1 userIdentifier:(id)arg2 ;
-(id)initWithPrefix:(id)arg1 userIdentifier:(id)arg2 UUID:(id)arg3 ;
@end

