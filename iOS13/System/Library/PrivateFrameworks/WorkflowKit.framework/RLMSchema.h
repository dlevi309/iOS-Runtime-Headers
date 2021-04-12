/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary;

@interface RLMSchema : NSObject <NSCopying> {

	NSArray* _objectSchema;
	Schema* _objectStoreSchema;
	NSMutableDictionary* _objectSchemaByName;

}

@property (nonatomic,retain) NSMutableDictionary * objectSchemaByName;              //@synthesize objectSchemaByName=_objectSchemaByName - In the implementation block
@property (nonatomic,copy) NSArray * objectSchema; 
+(id)partialPrivateSharedSchema;
+(id)sharedSchemaForClass:(Class)arg1 ;
+(id)sharedSchema;
+(Class)classForString:(id)arg1 ;
+(id)dynamicSchemaFromObjectStoreSchema:(const Schema*)arg1 ;
+(id)schemaWithObjectClasses:(id)arg1 ;
+(id)partialSharedSchema;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)schemaForClassName:(id)arg1 ;
-(NSArray *)objectSchema;
-(Schema*)objectStoreCopy;
-(NSMutableDictionary *)objectSchemaByName;
-(void)setObjectSchema:(NSArray *)arg1 ;
-(BOOL)isEqualToSchema:(id)arg1 ;
-(void)setObjectSchemaByName:(NSMutableDictionary *)arg1 ;
@end

