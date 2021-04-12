/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
*/

#import <MobileAccessoryUpdater/MobileAccessoryUpdater-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AUDAccessory : NSObject <NSSecureCoding, NSCopying> {

	NSString* _uid;
	NSString* _fwVersion;

}

@property (nonatomic,copy,readonly) NSString * uid;              //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) NSString * fwVersion;               //@synthesize fwVersion=_fwVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uid;
-(id)initWithUID:(id)arg1 ;
-(NSString *)fwVersion;
-(void)setFwVersion:(NSString *)arg1 ;
@end

