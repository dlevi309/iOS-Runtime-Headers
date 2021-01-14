/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

