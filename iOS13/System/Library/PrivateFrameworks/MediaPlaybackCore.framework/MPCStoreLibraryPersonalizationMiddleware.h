/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCPlayerResponseBuilder.h>
#import <libobjc.A.dylib/MPMiddleware.h>

@class NSArray, MPSectionedCollection, NSString;

@interface MPCStoreLibraryPersonalizationMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware> {

	NSArray* _invalidationObservers;
	MPSectionedCollection* _personalizedModelObjects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPSectionedCollection * personalizedModelObjects;              //@synthesize personalizedModelObjects=_personalizedModelObjects - In the implementation block
@property (nonatomic,retain) NSArray * invalidationObservers;                               //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(NSArray *)invalidationObservers;
-(id)operationsForRequest:(id)arg1 ;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4 ;
-(id)operationsForPlayerRequest:(id)arg1 ;
-(MPSectionedCollection *)personalizedModelObjects;
-(void)setPersonalizedModelObjects:(MPSectionedCollection *)arg1 ;
@end

