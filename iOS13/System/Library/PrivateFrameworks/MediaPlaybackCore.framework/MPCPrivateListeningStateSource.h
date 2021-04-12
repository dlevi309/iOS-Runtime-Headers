/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface MPCPrivateListeningStateSource : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _overrideValue;
	NSNumber* _currentValue;

}

@property (nonatomic,copy,readonly) NSNumber * overrideValue;              //@synthesize overrideValue=_overrideValue - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * currentValue;               //@synthesize currentValue=_currentValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localDeviceSource;
+(id)staticSourceWithValue:(id)arg1 ;
+(id)sourceWithUserIdentity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSNumber *)currentValue;
-(void)setOverrideValue:(NSNumber *)arg1 ;
-(NSNumber *)overrideValue;
@end

