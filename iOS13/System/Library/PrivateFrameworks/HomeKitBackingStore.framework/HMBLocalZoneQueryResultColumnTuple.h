/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(int)offset;
-(id)initWithName:(id)arg1 offset:(int)arg2 modelField:(id)arg3 ;
-(HMBModelField *)modelField;
@end

