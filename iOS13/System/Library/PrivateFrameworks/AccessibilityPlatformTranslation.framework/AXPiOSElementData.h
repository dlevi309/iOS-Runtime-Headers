/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
*/

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXPiOSElementData : NSObject <NSCopying> {

	int _pid;
	SCD_Struct_AX1 _uid;

}

@property (assign,nonatomic) SCD_Struct_AX1 uid;              //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) int pid;                         //@synthesize pid=_pid - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_AX1)uid;
-(void)setUid:(SCD_Struct_AX1)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
@end

