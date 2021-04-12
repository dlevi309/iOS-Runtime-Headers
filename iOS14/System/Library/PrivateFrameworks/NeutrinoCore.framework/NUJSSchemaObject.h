/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUJSModelObject.h>

@class NUSchema;

@interface NUJSSchemaObject : NUJSModelObject

@property (nonatomic,readonly) NUSchema * schema; 
@property (nonatomic,readonly) id<NUIdentifiable> item; 
+(id)JSValueWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3 ;
-(NUSchema *)schema;
-(id<NUIdentifiable>)item;
-(BOOL)hasProperty:(id)arg1 ;
-(id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)initWithWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3 ;
@end

