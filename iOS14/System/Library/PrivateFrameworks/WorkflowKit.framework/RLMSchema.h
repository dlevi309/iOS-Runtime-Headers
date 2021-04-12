/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedSchemaForClass:(Class)arg1 ;
+(id)dynamicSchemaFromObjectStoreSchema:(const Schema*)arg1 ;
+(id)partialPrivateSharedSchema;
+(id)sharedSchema;
+(id)schemaWithObjectClasses:(id)arg1 ;
+(Class)classForString:(id)arg1 ;
+(id)partialSharedSchema;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(id)schemaForClassName:(id)arg1 ;
-(NSArray *)objectSchema;
-(NSMutableDictionary *)objectSchemaByName;
-(id)description;
-(void)setObjectSchema:(NSArray *)arg1 ;
-(void)setObjectSchemaByName:(NSMutableDictionary *)arg1 ;
-(Schema*)objectStoreCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToSchema:(id)arg1 ;
@end

