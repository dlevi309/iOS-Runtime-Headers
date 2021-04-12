/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class VEKProduction;

@interface PMSaveProvider : NSObject {

	VEKProduction* _production;

}

@property (nonatomic,retain) VEKProduction * production;              //@synthesize production=_production - In the implementation block
-(void)save:(BOOL)arg1 ;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)initWithProduction:(id)arg1 ;
@end

