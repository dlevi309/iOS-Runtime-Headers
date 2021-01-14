/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class NSString;

@interface WFRecordProperty : NSObject {

	BOOL _readOnly;
	BOOL _nonAtomic;
	BOOL _dynamic;
	NSString* _name;
	NSString* _getter;
	NSString* _setter;

}

@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly;                //@synthesize readOnly=_readOnly - In the implementation block
@property (getter=isNonAtomic,nonatomic,readonly) BOOL nonAtomic;              //@synthesize nonAtomic=_nonAtomic - In the implementation block
@property (getter=isDynamic,nonatomic,readonly) BOOL dynamic;                  //@synthesize dynamic=_dynamic - In the implementation block
@property (nonatomic,readonly) NSString * getter;                              //@synthesize getter=_getter - In the implementation block
@property (nonatomic,readonly) NSString * setter;                              //@synthesize setter=_setter - In the implementation block
-(BOOL)isReadOnly;
-(BOOL)isDynamic;
-(NSString *)getter;
-(NSString *)setter;
-(NSString *)name;
-(id)initWithName:(id)arg1 property:(objc_propertyRef)arg2 ;
-(BOOL)isNonAtomic;
@end

