/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaCollection.h>

@class VUITVSeriesManagedObject;

@interface VUISidebandSeriesMediaCollection : VUIMediaCollection {

	VUITVSeriesManagedObject* _seriesManagedObject;

}

@property (nonatomic,retain) VUITVSeriesManagedObject * seriesManagedObject;              //@synthesize seriesManagedObject=_seriesManagedObject - In the implementation block
-(id)title;
-(id)isLocal;
-(id)canonicalID;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)seasonCount;
-(id)showIdentifier;
-(id)initWithMediaLibrary:(id)arg1 seriesManagedObject:(id)arg2 requestedProperties:(id)arg3 ;
-(VUITVSeriesManagedObject *)seriesManagedObject;
-(void)setSeriesManagedObject:(VUITVSeriesManagedObject *)arg1 ;
@end

