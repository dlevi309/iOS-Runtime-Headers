/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSString, NSSet;

@interface EKRelation : NSObject {

	NSString* _entityName;
	BOOL _toMany;
	BOOL _ownsRelated;
	NSSet* _inversePropertyNames;
	/*^block*/id _inversePropertyIsApplicable;

}

@property (nonatomic,readonly) BOOL toMany; 
@property (nonatomic,readonly) NSSet * inversePropertyNames; 
@property (nonatomic,readonly) BOOL ownsRelatedObject; 
@property (nonatomic,copy) id inversePropertyIsApplicable;                //@synthesize inversePropertyIsApplicable=_inversePropertyIsApplicable - In the implementation block
+(id)relationWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyNames:(id)arg3 ownsRelated:(BOOL)arg4 ;
+(id)relationWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyNames:(id)arg3 ;
-(id)description;
-(void)setInversePropertyIsApplicable:(id)arg1 ;
-(BOOL)toMany;
-(BOOL)ownsRelatedObject;
-(NSSet *)inversePropertyNames;
-(BOOL)shouldSetInverseProperty:(id)arg1 onObject:(id)arg2 forObject:(id)arg3 ;
-(id)initWithEntityName:(id)arg1 toMany:(BOOL)arg2 inversePropertyNames:(id)arg3 ownsRelated:(BOOL)arg4 ;
-(id)inversePropertyIsApplicable;
@end

