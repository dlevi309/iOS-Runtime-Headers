/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaCollection.h>

@class VUITVSeriesManagedObject;

@interface VUISidebandSeriesMediaCollection : VUIMediaCollection {

	VUITVSeriesManagedObject* _seriesManagedObject;

}

@property (nonatomic,retain) VUITVSeriesManagedObject * seriesManagedObject;              //@synthesize seriesManagedObject=_seriesManagedObject - In the implementation block
-(id)isLocal;
-(id)canonicalID;
-(id)title;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)seasonCount;
-(id)showIdentifier;
-(id)initWithMediaLibrary:(id)arg1 seriesManagedObject:(id)arg2 requestedProperties:(id)arg3 ;
-(VUITVSeriesManagedObject *)seriesManagedObject;
-(void)setSeriesManagedObject:(VUITVSeriesManagedObject *)arg1 ;
@end

