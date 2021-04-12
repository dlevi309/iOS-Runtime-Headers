/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(BOOL)isDark;
-(void)setDark:(BOOL)arg1 ;
@end

