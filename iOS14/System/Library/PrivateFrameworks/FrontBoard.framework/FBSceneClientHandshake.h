/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@class RBSProcessHandle, NSSet;

@interface FBSceneClientHandshake : NSObject {

	RBSProcessHandle* _handle;
	NSSet* _remnants;

}

@property (nonatomic,readonly) RBSProcessHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * remnants;                  //@synthesize remnants=_remnants - In the implementation block
-(RBSProcessHandle *)handle;
-(id)init;
-(NSSet *)remnants;
-(id)description;
-(id)_initWithHandle:(id)arg1 remnants:(id)arg2 ;
@end

