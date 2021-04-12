/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaCollection.h>

@class VUITVSeasonManagedObject;

@interface VUISidebandSeasonMediaCollection : VUIMediaCollection {

	VUITVSeasonManagedObject* _seasonManagedObject;

}

@property (nonatomic,retain) VUITVSeasonManagedObject * seasonManagedObject;              //@synthesize seasonManagedObject=_seasonManagedObject - In the implementation block
-(id)title;
-(id)isLocal;
-(id)seasonNumber;
-(id)canonicalID;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)showIdentifier;
-(id)initWithMediaLibrary:(id)arg1 seasonManagedObject:(id)arg2 requestedProperties:(id)arg3 ;
-(VUITVSeasonManagedObject *)seasonManagedObject;
-(void)setSeasonManagedObject:(VUITVSeasonManagedObject *)arg1 ;
@end

