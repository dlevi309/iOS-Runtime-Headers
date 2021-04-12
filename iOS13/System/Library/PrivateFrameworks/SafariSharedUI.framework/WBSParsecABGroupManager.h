/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSParsecABGroupStoreClient.h>

@protocol WBSParsecABGroupStore;
@class NSTimer, NSString;

@interface WBSParsecABGroupManager : NSObject <WBSParsecABGroupStoreClient> {

	NSTimer* _shuffleTimer;
	id<WBSParsecABGroupStore> _groupStore;
	unsigned long long _groupIdentifier;

}

@property (nonatomic,readonly) id<WBSParsecABGroupStore> groupStore;              //@synthesize groupStore=_groupStore - In the implementation block
@property (nonatomic,readonly) unsigned long long groupIdentifier;                //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)ephemeralGroupIdentifier;
+(unsigned long long)_weightedRandomIdentifier;
-(unsigned long long)groupIdentifier;
-(void)abGroupStoreDidUpdateGroupIdentifier:(id)arg1 ;
-(void)_generateAndSaveNewGroupIdentifier;
-(void)shuffleGroup;
-(void)_scheduleShuffleTimer;
-(void)_postDidChangeGroupIdentifierNotification;
-(id)initWithGroupStore:(id)arg1 ;
-(id<WBSParsecABGroupStore>)groupStore;
@end

