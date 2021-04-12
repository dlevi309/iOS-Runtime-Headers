/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLModelSerialize.h>

@class NSMutableDictionary, NSString, NSMutableArray, NSMutableSet, NSDictionary, TMLMetaObject, NSArray, NSSet;

@interface TMLMetaContext : NSObject <TMLModelSerialize> {

	NSMutableDictionary* _classes;
	NSMutableDictionary* _protocols;
	NSMutableDictionary* _objects;
	NSString* _rootObjectIdentifier;
	NSMutableDictionary* _functions;
	NSMutableArray* _exports;
	NSMutableArray* _categories;
	NSMutableSet* _requires;

}

@property (nonatomic,readonly) NSDictionary * classes;                  //@synthesize classes=_classes - In the implementation block
@property (nonatomic,readonly) NSDictionary * protocols;                //@synthesize protocols=_protocols - In the implementation block
@property (nonatomic,readonly) NSDictionary * objects;                  //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSDictionary * functions;                //@synthesize functions=_functions - In the implementation block
@property (nonatomic,readonly) TMLMetaObject * rootObject; 
@property (nonatomic,readonly) NSArray * exports;                       //@synthesize exports=_exports - In the implementation block
@property (nonatomic,readonly) NSSet * requires;                        //@synthesize requires=_requires - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                    //@synthesize categories=_categories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decode:(const ProtobufCMessage*)arg1 ;
+(id)deserializeFromData:(id)arg1 ;
+(id)convertObject:(id)arg1 toClass:(id)arg2 ;
+(id)convertObject:(id)arg1 toProtocol:(id)arg2 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(TMLMetaObject *)rootObject;
-(void)addClass:(id)arg1 ;
-(NSDictionary *)objects;
-(void)commit;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(NSDictionary *)protocols;
-(NSDictionary *)classes;
-(NSArray *)categories;
-(id)serializedData;
-(NSDictionary *)functions;
-(void)addFunction:(id)arg1 ;
-(void)addExports:(id)arg1 ;
-(void)addRequire:(id)arg1 ;
-(id)findParentForObjectWithIdentifier:(id)arg1 ;
-(NSSet *)requires;
-(void)removeClasses;
-(void)removeFunctions;
-(void)removeCategories;
-(void)addObjectAsClass:(id)arg1 ;
-(void)addObjectAsProtocol:(id)arg1 ;
-(void)addProtocol:(id)arg1 ;
-(NSArray *)exports;
@end

