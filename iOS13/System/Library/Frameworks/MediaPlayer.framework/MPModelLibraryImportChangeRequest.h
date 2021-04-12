/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelObject, MPSectionedCollection;

@interface MPModelLibraryImportChangeRequest : NSObject <NSCopying> {

	BOOL _shouldLibraryAdd;
	MPModelObject* _referralObject;
	MPSectionedCollection* _modelObjects;

}

@property (nonatomic,copy) MPModelObject * referralObject;                    //@synthesize referralObject=_referralObject - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * modelObjects;              //@synthesize modelObjects=_modelObjects - In the implementation block
@property (assign,nonatomic) BOOL shouldLibraryAdd;                           //@synthesize shouldLibraryAdd=_shouldLibraryAdd - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelObject *)referralObject;
-(void)setReferralObject:(MPModelObject *)arg1 ;
-(BOOL)shouldLibraryAdd;
-(void)setShouldLibraryAdd:(BOOL)arg1 ;
-(MPSectionedCollection *)modelObjects;
-(void)setModelObjects:(MPSectionedCollection *)arg1 ;
@end

