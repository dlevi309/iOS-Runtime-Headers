/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/CRKUserDefaultsObject.h>

@class NSSet;

@interface CRKSecureCodedUserDefaultsObject : CRKUserDefaultsObject {

	NSSet* _classes;

}

@property (nonatomic,copy,readonly) NSSet * classes;              //@synthesize classes=_classes - In the implementation block
-(id)valueWithError:(id*)arg1 ;
-(NSSet *)classes;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)initWithKey:(id)arg1 classes:(id)arg2 ;
-(void)registerDefaultValue:(id)arg1 ;
-(id)initWithStore:(id)arg1 key:(id)arg2 classes:(id)arg3 ;
-(BOOL)setValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithDefaults:(id)arg1 key:(id)arg2 classes:(id)arg3 ;
@end

