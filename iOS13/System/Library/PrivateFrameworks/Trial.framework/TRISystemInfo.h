/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TRISystemInfo : NSObject <NSSecureCoding> {

	BOOL _isBetaUser;

}

@property (assign) BOOL isBetaUser;              //@synthesize isBetaUser=_isBetaUser - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)info;
+(id)loadSystemInfo;
+(id)createSystemInfo;
+(id)systemInfoFromFile:(id)arg1 ;
+(BOOL)_sysIsBetaUser;
+(BOOL)_sysIsProfileInstalledWithIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)save;
-(BOOL)saveToFile:(id)arg1 ;
-(id)initFromSystem;
-(BOOL)isBetaUser;
-(void)setIsBetaUser:(BOOL)arg1 ;
@end

