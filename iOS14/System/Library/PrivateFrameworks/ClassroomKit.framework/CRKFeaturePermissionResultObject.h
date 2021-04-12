/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CRKFeaturePermissionResultObject : NSObject <NSSecureCoding> {

	BOOL _modifiable;
	unsigned long long _permission;

}

@property (assign,nonatomic) unsigned long long permission;                    //@synthesize permission=_permission - In the implementation block
@property (assign,getter=isModifiable,nonatomic) BOOL modifiable;              //@synthesize modifiable=_modifiable - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryValue;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)permission;
-(void)setPermission:(unsigned long long)arg1 ;
-(BOOL)isModifiable;
-(void)setModifiable:(BOOL)arg1 ;
@end

