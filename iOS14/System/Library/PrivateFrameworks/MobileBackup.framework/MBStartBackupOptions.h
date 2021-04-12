/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MBStartBackupOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowCellular;

}

@property (assign,nonatomic) BOOL allowCellular;              //@synthesize allowCellular=_allowCellular - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAllowCellular:(BOOL)arg1 ;
-(BOOL)allowCellular;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

