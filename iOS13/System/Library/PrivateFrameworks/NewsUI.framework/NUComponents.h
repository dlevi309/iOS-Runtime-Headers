/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSMutableArray, NSArray;

@interface NUComponents : NSObject {

	NSMutableArray* _mutableComponents;

}

@property (nonatomic,readonly) NSMutableArray * mutableComponents;              //@synthesize mutableComponents=_mutableComponents - In the implementation block
@property (nonatomic,readonly) NSArray * components; 
@property (nonatomic,readonly) NSArray * reversedComponents; 
-(id)init;
-(id)description;
-(NSArray *)components;
-(void)addComponent:(id)arg1 ;
-(NSMutableArray *)mutableComponents;
-(NSArray *)reversedComponents;
@end

