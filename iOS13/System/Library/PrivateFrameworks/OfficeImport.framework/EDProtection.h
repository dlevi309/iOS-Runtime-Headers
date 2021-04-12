/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDProtection : NSObject <NSCopying> {

	BOOL mHidden;
	BOOL mLocked;

}
+(id)protectionWithHidden:(BOOL)arg1 locked:(BOOL)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHidden;
-(BOOL)isLocked;
-(id)initWithHidden:(BOOL)arg1 locked:(BOOL)arg2 ;
-(BOOL)isEqualToProtection:(id)arg1 ;
@end

