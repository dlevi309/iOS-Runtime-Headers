/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBShutdownContext : NSObject <NSCopying> {

	NSString* _reason;
	BOOL _fromUserPowerDown;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL fromUserPowerDown;                //@synthesize fromUserPowerDown=_fromUserPowerDown - In the implementation block
-(id)initWithReason:(id)arg1 ;
-(id)description;
-(NSString *)reason;
-(BOOL)fromUserPowerDown;
-(void)setFromUserPowerDown:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

