/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMBModelField;

@interface HMBLocalZoneQueryResultColumnTuple : HMFObject {

	int _offset;
	NSString* _name;
	HMBModelField* _modelField;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int offset;                              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) HMBModelField * modelField;              //@synthesize modelField=_modelField - In the implementation block
-(NSString *)name;
-(int)offset;
-(id)description;
-(id)initWithName:(id)arg1 offset:(int)arg2 modelField:(id)arg3 ;
-(HMBModelField *)modelField;
@end

