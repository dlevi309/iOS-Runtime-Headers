/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)character;
-(void)setCharacter:(NSString *)arg1 ;
@end

