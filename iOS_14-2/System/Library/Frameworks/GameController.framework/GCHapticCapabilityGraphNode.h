/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/GCJSONRepresentable.h>

@class NSString, NSMutableArray;

@interface GCHapticCapabilityGraphNode : NSObject <GCJSONRepresentable> {

	BOOL _exposed;
	NSString* _label;
	NSMutableArray* _children;
	NSMutableArray* _actuators;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * children;                    //@synthesize children=_children - In the implementation block
@property (nonatomic,retain) NSMutableArray * actuators;                   //@synthesize actuators=_actuators - In the implementation block
@property (nonatomic,readonly) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (getter=isExposed,nonatomic,readonly) BOOL exposed;              //@synthesize exposed=_exposed - In the implementation block
-(NSMutableArray *)children;
-(void)addChild:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(NSString *)label;
-(id)initWithJSONDictionaryRepresentation:(id)arg1 ;
-(NSMutableArray *)actuators;
-(BOOL)isExposed;
-(void)setActuators:(NSMutableArray *)arg1 ;
-(void)addActuator:(id)arg1 ;
@end

