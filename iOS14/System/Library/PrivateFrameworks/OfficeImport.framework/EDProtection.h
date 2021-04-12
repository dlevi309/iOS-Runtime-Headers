/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDProtection : NSObject <NSCopying> {

	BOOL mHidden;
	BOOL mLocked;

}
+(id)protectionWithHidden:(BOOL)arg1 locked:(BOOL)arg2 ;
-(BOOL)isLocked;
-(BOOL)isHidden;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithHidden:(BOOL)arg1 locked:(BOOL)arg2 ;
-(BOOL)isEqualToProtection:(id)arg1 ;
@end

