/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersistentHistoryToken;

@interface PHPersistentChangeToken : NSObject <NSCopying, NSSecureCoding> {

	NSPersistentHistoryToken* _persistentHistoryToken;
	int _version;

}

@property (nonatomic,readonly) NSPersistentHistoryToken * persistentHistoryToken;              //@synthesize persistentHistoryToken=_persistentHistoryToken - In the implementation block
@property (nonatomic,readonly) int version;                                                    //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tokenWithPersistentHistoryToken:(id)arg1 ;
+(int)currentVersion;
+(id)currentTokenForContext:(id)arg1 ;
-(BOOL)isEqualToPersistentChangeToken:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPersistentHistoryToken:(id)arg1 ;
-(NSPersistentHistoryToken *)persistentHistoryToken;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(int)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPersistentHistoryToken:(id)arg1 version:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

