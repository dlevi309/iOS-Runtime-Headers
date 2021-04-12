/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString;

@interface _UITraitStorage : NSObject <NSCoding> {

	NSMutableArray* _records;
	NSString* _keyPath;
	id _object;

}

@property (nonatomic,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,__weak,readonly) id object;                //@synthesize object=_object - In the implementation block
-(id)records;
-(void)encodeWithCoder:(id)arg1 ;
-(id)object;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 ;
-(id)_propertyDescriptionString;
-(void)applyRecordsMatchingTraitCollection:(id)arg1 ;
-(void)addRecord:(id)arg1 ;
@end

