/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKContinuationMetadataBase.h>

@class WLKPlayable, NSString, NSNumber, NSArray;

@interface WLKContinuationMetadata : WLKContinuationMetadataBase {

	WLKPlayable* _playable;
	NSString* _deleteID;
	NSNumber* _siriActionsExpirationEpochMillis;
	NSArray* _siriActionsCategories;

}

@property (nonatomic,readonly) WLKPlayable * playable;                                        //@synthesize playable=_playable - In the implementation block
@property (nonatomic,copy,readonly) NSString * deleteID;                                      //@synthesize deleteID=_deleteID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * siriActionsExpirationEpochMillis;              //@synthesize siriActionsExpirationEpochMillis=_siriActionsExpirationEpochMillis - In the implementation block
@property (nonatomic,copy,readonly) NSArray * siriActionsCategories;                          //@synthesize siriActionsCategories=_siriActionsCategories - In the implementation block
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(WLKPlayable *)playable;
-(NSString *)deleteID;
-(NSNumber *)siriActionsExpirationEpochMillis;
-(NSArray *)siriActionsCategories;
@end

