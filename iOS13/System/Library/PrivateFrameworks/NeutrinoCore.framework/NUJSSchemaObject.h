/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUJSModelObject.h>

@class NUSchema;

@interface NUJSSchemaObject : NUJSModelObject

@property (nonatomic,readonly) NUSchema * schema; 
@property (nonatomic,readonly) id<NUIdentifiable> item; 
+(id)JSValueWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3 ;
-(id<NUIdentifiable>)item;
-(NUSchema *)schema;
-(BOOL)hasProperty:(id)arg1 ;
-(id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)initWithWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3 ;
@end

