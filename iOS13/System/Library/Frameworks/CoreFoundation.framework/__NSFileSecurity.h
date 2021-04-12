/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSFileSecurity.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSSecureCoding> {

	filesecRef _filesec;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)__new:(filesecRef)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(filesecRef)_filesec;
-(BOOL)getOwner:(unsigned*)arg1 ;
-(BOOL)setOwner:(unsigned)arg1 ;
-(BOOL)getGroup:(unsigned*)arg1 ;
-(BOOL)setGroup:(unsigned)arg1 ;
-(BOOL)getMode:(unsigned short*)arg1 ;
-(BOOL)setMode:(unsigned short)arg1 ;
-(BOOL)getOwnerUUID:(unsigned char*)arg1 ;
-(BOOL)setOwnerUUID:(unsigned char)arg1 ;
-(BOOL)getGroupUUID:(unsigned char*)arg1 ;
-(BOOL)setGroupUUID:(unsigned char)arg1 ;
-(BOOL)copyAccessControlList:(acl*)arg1 ;
-(BOOL)setAccessControlList:(aclRef)arg1 ;
-(BOOL)clearProperties:(unsigned long long)arg1 ;
@end

