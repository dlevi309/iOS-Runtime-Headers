/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMLocation.h>

@class NSString;

@interface CRKASMConcreteLocation : NSObject <CRKASMLocation> {

	NSString* _identifier;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBackingLocation:(id)arg1 ;
@end

