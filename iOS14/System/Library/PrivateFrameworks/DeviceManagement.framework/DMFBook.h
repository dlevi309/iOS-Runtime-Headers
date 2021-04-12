/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface DMFBook : NSObject <NSCopying, NSSecureCoding> {

	NSString* _persistentID;
	NSNumber* _iTunesStoreID;
	NSString* _author;
	NSString* _title;
	NSString* _version;
	unsigned long long _type;
	unsigned long long _state;

}

@property (nonatomic,copy,readonly) NSString * persistentID;               //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * iTunesStoreID;              //@synthesize iTunesStoreID=_iTunesStoreID - In the implementation block
@property (nonatomic,copy,readonly) NSString * author;                     //@synthesize author=_author - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                   //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)author;
-(NSNumber *)iTunesStoreID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithPersistentID:(id)arg1 iTunesStoreID:(id)arg2 author:(id)arg3 title:(id)arg4 version:(id)arg5 type:(unsigned long long)arg6 state:(unsigned long long)arg7 ;
-(NSString *)persistentID;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

