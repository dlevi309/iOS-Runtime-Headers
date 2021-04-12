/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(int)currentVersion;
+(id)currentTokenForContext:(id)arg1 ;
+(id)tokenWithPersistentHistoryToken:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)version;
-(id)initWithPersistentHistoryToken:(id)arg1 version:(int)arg2 ;
-(id)initWithPersistentHistoryToken:(id)arg1 ;
-(BOOL)isEqualToPersistentChangeToken:(id)arg1 ;
-(NSPersistentHistoryToken *)persistentHistoryToken;
@end

