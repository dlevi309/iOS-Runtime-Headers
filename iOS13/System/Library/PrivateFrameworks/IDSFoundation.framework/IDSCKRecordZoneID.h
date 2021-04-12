/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

