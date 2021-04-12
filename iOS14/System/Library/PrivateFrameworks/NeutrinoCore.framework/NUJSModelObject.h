/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUJSObject.h>

@class NUModel;

@interface NUJSModelObject : NUJSObject {

	NUModel* _model;

}

@property (nonatomic,readonly) NUModel * model;              //@synthesize model=_model - In the implementation block
+(id)JSValueWithModel:(id)arg1 object:(id)arg2 context:(id)arg3 ;
-(NUModel *)model;
-(id)toObject;
-(id)description;
-(BOOL)hasProperty:(id)arg1 ;
-(void)reset;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3 ;
-(void)enumerateProperties:(/*^block*/id)arg1 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
@end

