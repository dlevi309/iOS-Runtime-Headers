/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_scheduleShuffleTimer;
-(id<WBSParsecABGroupStore>)groupStore;
-(id)initWithGroupStore:(id)arg1 ;
-(void)_postDidChangeGroupIdentifierNotification;
-(void)_generateAndSaveNewGroupIdentifier;
-(void)shuffleGroup;
@end

