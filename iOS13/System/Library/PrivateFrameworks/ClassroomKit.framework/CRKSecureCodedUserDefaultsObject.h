/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/CRKUserDefaultsObject.h>

@class NSSet;

@interface CRKSecureCodedUserDefaultsObject : CRKUserDefaultsObject {

	NSSet* _classes;

}

@property (nonatomic,copy,readonly) NSSet * classes;              //@synthesize classes=_classes - In the implementation block
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSSet *)classes;
-(id)valueWithError:(id*)arg1 ;
-(id)initWithKey:(id)arg1 classes:(id)arg2 ;
-(void)registerDefaultValue:(id)arg1 ;
-(id)initWithStore:(id)arg1 key:(id)arg2 classes:(id)arg3 ;
-(BOOL)setValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithDefaults:(id)arg1 key:(id)arg2 classes:(id)arg3 ;
@end

