/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IDSCKRecordZoneID : NSObject <NSSecureCoding, NSCopying> {

	NSString* _zoneName;
	NSString* _ownerName;

}

@property (nonatomic,readonly) NSString * zoneName;               //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) NSString * ownerName;              //@synthesize ownerName=_ownerName - In the implementation block
+(id)alloc;
+(Class)__class;
-(NSString *)zoneName;
-(NSString *)ownerName;
@end

