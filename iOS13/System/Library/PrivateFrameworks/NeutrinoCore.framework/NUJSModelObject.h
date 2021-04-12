/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUJSObject.h>

@class NUModel;

@interface NUJSModelObject : NUJSObject {

	NUModel* _model;

}

@property (nonatomic,readonly) NUModel * model;              //@synthesize model=_model - In the implementation block
+(id)JSValueWithModel:(id)arg1 object:(id)arg2 context:(id)arg3 ;
-(id)description;
-(void)reset;
-(NUModel *)model;
-(id)toObject;
-(BOOL)hasProperty:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3 ;
-(void)enumerateProperties:(/*^block*/id)arg1 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
@end

