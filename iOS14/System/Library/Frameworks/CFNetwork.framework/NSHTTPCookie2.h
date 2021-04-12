/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDate;

@interface NSHTTPCookie2 : NSObject <NSCopying, NSMutableCopying> {

	NSString* _name;
	NSString* _value;
	NSString* _domain;
	NSString* _path;
	NSString* _partition;
	NSString* _etldPlusOne;
	unsigned long long _sCreationDate;
	unsigned long long _sExpirationDate;
	unsigned long long _sLastAccessTime;
	BOOL _secure;
	BOOL _httpOnly;
	BOOL _hostOnly;
	BOOL _session;
	long long _sameSite;
	long long _source;
	BOOL _sesion;
	NSDate* creationDate;

}

@property (readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (readonly) NSString * value;                     //@synthesize value=_value - In the implementation block
@property (readonly) NSString * domain;                    //@synthesize domain=_domain - In the implementation block
@property (readonly) NSString * path;                      //@synthesize path=_path - In the implementation block
@property (readonly) NSDate * creationDate; 
@property (readonly) NSDate * expirationDate; 
@property (readonly) BOOL sesion;                          //@synthesize sesion=_sesion - In the implementation block
@property (readonly) BOOL secure;                          //@synthesize secure=_secure - In the implementation block
@property (readonly) BOOL httpOnly;                        //@synthesize httpOnly=_httpOnly - In the implementation block
@property (readonly) BOOL hostOnly;                        //@synthesize hostOnly=_hostOnly - In the implementation block
@property (readonly) NSString * partition;                 //@synthesize partition=_partition - In the implementation block
@property (readonly) long long source;                     //@synthesize source=_source - In the implementation block
@property (readonly) long long sameSite;                   //@synthesize sameSite=_sameSite - In the implementation block
-(BOOL)secure;
-(BOOL)sesion;
-(BOOL)hostOnly;
-(BOOL)httpOnly;
-(long long)sameSite;
-(NSString *)partition;
-(id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 ;
-(NSString *)path;
-(NSString *)domain;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(id)description;
-(NSDate *)creationDate;
-(NSDate *)expirationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(long long)source;
@end

