/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMOrganization.h>

@class NSUUID, NSString;

@interface CRKASMConcreteOrganization : NSObject <CRKASMOrganization> {

	NSUUID* _UUID;
	NSString* _name;

}

@property (nonatomic,readonly) NSUUID * UUID;                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)UUID;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

