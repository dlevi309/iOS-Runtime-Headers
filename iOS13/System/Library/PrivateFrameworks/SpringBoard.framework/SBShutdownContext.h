/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(void)setFromUserPowerDown:(BOOL)arg1 ;
-(BOOL)fromUserPowerDown;
@end

