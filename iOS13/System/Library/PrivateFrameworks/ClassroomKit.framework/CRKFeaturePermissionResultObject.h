/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryValue;
-(unsigned long long)permission;
-(void)setPermission:(unsigned long long)arg1 ;
-(BOOL)isModifiable;
-(void)setModifiable:(BOOL)arg1 ;
@end

