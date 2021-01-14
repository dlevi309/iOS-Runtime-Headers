/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)uid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)fwVersion;
-(void)setFwVersion:(NSString *)arg1 ;
@end

