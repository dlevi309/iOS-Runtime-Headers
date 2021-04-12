/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSSet *)tags;
-(CALayer *)layer;
-(void)_applyPrimaryColorWithModifiers:(id)arg1 ;
-(id)initWithName:(id)arg1 layer:(id)arg2 ;
-(void)applyModifiers:(id)arg1 ;
@end

