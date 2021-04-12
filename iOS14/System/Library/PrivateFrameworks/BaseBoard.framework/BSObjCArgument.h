/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSArray;

@interface BSObjCArgument : NSObject <BSDescriptionProviding> {

	NSString* _encoding;
	unsigned long long _size;
	char _type;
	BOOL _onewayVoid;
	BOOL _plistObject;
	Class _objectClass;
	NSString* _structName;
	NSArray* _protocols;
	NSArray* _containedClasses;
	NSString* _name;
	long long _index;

}

@property (nonatomic,copy,readonly) NSString * encoding; 
@property (nonatomic,readonly) char type; 
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) long long index;                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * structName;                         //@synthesize structName=_structName - In the implementation block
@property (nonatomic,retain,readonly) Class objectClass;                           //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,copy,readonly) NSArray * protocols;                           //@synthesize protocols=_protocols - In the implementation block
@property (nonatomic,retain,readonly) NSArray * containedClasses;                  //@synthesize containedClasses=_containedClasses - In the implementation block
@property (getter=isObject,nonatomic,readonly) BOOL object; 
@property (getter=isXPCObject,nonatomic,readonly) BOOL xpcObject; 
@property (getter=isBlock,nonatomic,readonly) BOOL block; 
@property (getter=isPointer,nonatomic,readonly) BOOL pointer; 
@property (getter=isBoolean,nonatomic,readonly) BOOL boolean; 
@property (getter=isVoid,nonatomic,readonly) BOOL isVoid; 
@property (getter=isOnewayVoid,nonatomic,readonly) BOOL onewayVoid;                //@synthesize onewayVoid=_onewayVoid - In the implementation block
@property (getter=isPlistObject,nonatomic,readonly) BOOL plistObject;              //@synthesize plistObject=_plistObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(long long)index;
-(BOOL)isBlock;
-(BOOL)isBoolean;
-(unsigned long long)size;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)encoding;
-(BOOL)isPlistObject;
-(NSString *)name;
-(NSArray *)containedClasses;
-(NSString *)description;
-(BOOL)isVoid;
-(NSString *)structName;
-(BOOL)isXPCObject;
-(char)type;
-(BOOL)isOnewayVoid;
-(Class)objectClass;
-(id)_prettyTypeString;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isPointer;
-(id)succinctDescriptionBuilder;
-(BOOL)isObject;
-(NSArray *)protocols;
@end

