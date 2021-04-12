/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long index;                                      //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * encoding;                           //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) char type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                            //@synthesize size=_size - In the implementation block
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
+(id)argumentWithSignature:(id)arg1 atIndex:(long long)arg2 ;
-(NSString *)description;
-(NSString *)name;
-(char)type;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)size;
-(long long)index;
-(BOOL)isObject;
-(NSString *)encoding;
-(Class)objectClass;
-(void)setIndex:(long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_prettyTypeString;
-(BOOL)isBlock;
-(id)initWithSignature:(id)arg1 atIndex:(long long)arg2 ;
-(BOOL)isXPCObject;
-(BOOL)isBoolean;
-(BOOL)isVoid;
-(BOOL)isPointer;
-(NSString *)structName;
-(NSArray *)protocols;
-(NSArray *)containedClasses;
-(BOOL)isOnewayVoid;
-(BOOL)isPlistObject;
@end

