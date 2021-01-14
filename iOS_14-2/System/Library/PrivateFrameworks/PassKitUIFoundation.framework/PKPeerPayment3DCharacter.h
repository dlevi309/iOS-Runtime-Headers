/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/


@class NSString, SCNNode;

@interface PKPeerPayment3DCharacter : NSObject {

	NSString* _character;
	SCNNode* _node;

}

@property (nonatomic,retain) NSString * character;              //@synthesize character=_character - In the implementation block
@property (nonatomic,retain) SCNNode * node;                    //@synthesize node=_node - In the implementation block
+(id)characterWithCharacter:(id)arg1 node:(id)arg2 ;
-(SCNNode *)node;
-(void)setNode:(SCNNode *)arg1 ;
-(void)setCharacter:(NSString *)arg1 ;
-(NSString *)character;
@end

