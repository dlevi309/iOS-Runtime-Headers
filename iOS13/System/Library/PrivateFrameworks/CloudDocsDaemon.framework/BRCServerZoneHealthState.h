/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BRFieldCKInfo;

@interface BRCServerZoneHealthState : NSObject <NSSecureCoding, NSCopying> {

	int _state;
	BRFieldCKInfo* _ckInfo;

}

@property (nonatomic,readonly) BRFieldCKInfo * ckInfo;              //@synthesize ckInfo=_ckInfo - In the implementation block
@property (nonatomic,readonly) int state;                           //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(BRFieldCKInfo *)ckInfo;
-(id)initWithCKInfo:(id)arg1 state:(int)arg2 ;
-(id)initWithServerZoneHealthState:(id)arg1 ;
@end

