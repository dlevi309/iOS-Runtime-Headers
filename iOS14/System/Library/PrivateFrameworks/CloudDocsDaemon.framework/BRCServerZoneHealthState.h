/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(BRFieldCKInfo *)ckInfo;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCKInfo:(id)arg1 state:(int)arg2 ;
-(id)initWithServerZoneHealthState:(id)arg1 ;
@end

