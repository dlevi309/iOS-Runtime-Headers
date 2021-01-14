/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUid:(SCD_Struct_AX1)arg1 ;
-(SCD_Struct_AX1)uid;
-(int)pid;
-(id)description;
-(unsigned long long)hash;
-(void)setPid:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

