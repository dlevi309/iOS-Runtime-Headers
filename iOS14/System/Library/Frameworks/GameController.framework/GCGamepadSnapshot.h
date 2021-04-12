/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCGamepad.h>

@class NSData;

@interface GCGamepadSnapshot : GCGamepad {

	NSData* snapshotData;

}

@property (copy) NSData * snapshotData; 
-(id)init;
-(NSData *)snapshotData;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(void)setSnapshotData:(NSData *)arg1 ;
-(id)initWithSnapshotData:(id)arg1 ;
@end

