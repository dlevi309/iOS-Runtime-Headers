/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(void)applyRecordsMatchingTraitCollection:(id)arg1 ;
-(id)_propertyDescriptionString;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 ;
-(id)records;
-(void)addRecord:(id)arg1 ;
@end

