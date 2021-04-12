/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBRebootContext : NSObject <NSCopying> {

	NSString* _reason;
	BOOL _isDark;
	BOOL _fromOTASoftwareUpdate;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (assign,getter=isDark,nonatomic) BOOL dark;               //@synthesize isDark=_isDark - In the implementation block
-(id)initWithReason:(id)arg1 ;
-(id)description;
-(void)setDark:(BOOL)arg1 ;
-(NSString *)reason;
-(BOOL)isDark;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

