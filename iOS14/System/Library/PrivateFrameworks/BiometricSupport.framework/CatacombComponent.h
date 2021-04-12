/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/

#import <BiometricSupport/BiometricSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CatacombComponent : NSObject <NSCopying> {

	SCD_Struct_Ca3 _component;

}

@property (nonatomic,readonly) SCD_Struct_Ca4* component; 
@property (nonatomic,readonly) unsigned userID; 
+(id)componentForUserID:(unsigned)arg1 ;
+(id)masterComponent;
-(unsigned)userID;
-(id)description;
-(SCD_Struct_Ca4*)component;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToComponent:(id)arg1 ;
-(BOOL)isMasterComponent;
-(BOOL)isUserComponent;
@end

