/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSString, CALayer, NSSet;

@interface HUCAPackageLayer : NSObject {

	NSString* _name;
	CALayer* _layer;
	NSSet* _tags;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) NSSet * tags;                 //@synthesize tags=_tags - In the implementation block
+(id)_allTags;
+(id)_tagsForName:(id)arg1 ;
-(CALayer *)layer;
-(NSSet *)tags;
-(NSString *)name;
-(void)_applyPrimaryColorWithModifiers:(id)arg1 ;
-(id)initWithName:(id)arg1 layer:(id)arg2 ;
-(void)applyModifiers:(id)arg1 ;
@end

