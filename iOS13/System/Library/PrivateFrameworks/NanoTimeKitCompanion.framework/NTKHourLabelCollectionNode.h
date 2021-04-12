/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKLabelCollectionNode.h>

@class NSArray;

@interface NTKHourLabelCollectionNode : NTKLabelCollectionNode {

	NSArray* _valid;

}

@property (nonatomic,retain) NSArray * valid;              //@synthesize valid=_valid - In the implementation block
-(NSArray *)valid;
-(void)setValid:(NSArray *)arg1 ;
-(void)createSubNodes;
-(id)createParentNodesForHours:(id)arg1 withPositions:(CGPoint*)arg2 validHours:(id)arg3 ;
@end

