/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@class NSSet;

@interface ASRelationshipBeganPlaceholder : NSObject {

	id _token;
	NSSet* _blocksWaitingOnSuccess;

}

@property (nonatomic,readonly) id token;                                    //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSSet * blocksWaitingOnSuccess;              //@synthesize blocksWaitingOnSuccess=_blocksWaitingOnSuccess - In the implementation block
-(id)token;
-(id)initWithToken:(id)arg1 ;
-(void)registerBlockWaitingOnSuccess:(/*^block*/id)arg1 ;
-(NSSet *)blocksWaitingOnSuccess;
@end

