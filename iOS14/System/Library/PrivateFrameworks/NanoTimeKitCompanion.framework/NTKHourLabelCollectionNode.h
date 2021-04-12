/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKLabelCollectionNode.h>

@class NSArray;

@interface NTKHourLabelCollectionNode : NTKLabelCollectionNode {

	NSArray* _valid;

}

@property (nonatomic,retain) NSArray * valid;              //@synthesize valid=_valid - In the implementation block
-(void)setValid:(NSArray *)arg1 ;
-(NSArray *)valid;
-(void)createSubNodes;
-(id)createParentNodesForHours:(id)arg1 withPositions:(CGPoint*)arg2 validHours:(id)arg3 ;
@end

