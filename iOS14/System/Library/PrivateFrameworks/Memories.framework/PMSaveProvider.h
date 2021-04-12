/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

