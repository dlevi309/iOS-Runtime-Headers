/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaCollection.h>

@class VUITVSeasonManagedObject;

@interface VUISidebandSeasonMediaCollection : VUIMediaCollection {

	VUITVSeasonManagedObject* _seasonManagedObject;

}

@property (nonatomic,retain) VUITVSeasonManagedObject * seasonManagedObject;              //@synthesize seasonManagedObject=_seasonManagedObject - In the implementation block
-(id)isLocal;
-(id)seasonNumber;
-(id)canonicalID;
-(id)title;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)showIdentifier;
-(id)initWithMediaLibrary:(id)arg1 seasonManagedObject:(id)arg2 requestedProperties:(id)arg3 ;
-(VUITVSeasonManagedObject *)seasonManagedObject;
-(void)setSeasonManagedObject:(VUITVSeasonManagedObject *)arg1 ;
@end

