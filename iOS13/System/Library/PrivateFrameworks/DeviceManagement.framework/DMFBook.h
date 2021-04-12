/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(unsigned long long)state;
-(NSString *)title;
-(NSString *)author;
-(NSString *)persistentID;
-(NSNumber *)iTunesStoreID;
-(id)initWithPersistentID:(id)arg1 iTunesStoreID:(id)arg2 author:(id)arg3 title:(id)arg4 version:(id)arg5 type:(unsigned long long)arg6 state:(unsigned long long)arg7 ;
@end

