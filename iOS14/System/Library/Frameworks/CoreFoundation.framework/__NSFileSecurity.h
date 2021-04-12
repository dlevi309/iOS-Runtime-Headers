/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSFileSecurity.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSSecureCoding> {

	filesecRef _filesec;

}
+(id)__new:(filesecRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)getOwner:(unsigned*)arg1 ;
-(BOOL)getGroup:(unsigned*)arg1 ;
-(BOOL)setGroup:(unsigned)arg1 ;
-(filesecRef)_filesec;
-(BOOL)getMode:(unsigned short*)arg1 ;
-(BOOL)getOwnerUUID:(unsigned char*)arg1 ;
-(BOOL)setOwnerUUID:(unsigned char)arg1 ;
-(BOOL)getGroupUUID:(unsigned char*)arg1 ;
-(BOOL)setGroupUUID:(unsigned char)arg1 ;
-(BOOL)clearProperties:(unsigned long long)arg1 ;
-(BOOL)setAccessControlList:(aclRef)arg1 ;
-(BOOL)copyAccessControlList:(acl*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)setMode:(unsigned short)arg1 ;
-(id)description;
-(BOOL)setOwner:(unsigned)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

