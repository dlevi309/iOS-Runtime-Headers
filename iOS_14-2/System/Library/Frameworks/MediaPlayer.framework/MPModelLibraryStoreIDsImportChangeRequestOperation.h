/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibrary, MPModelObject, NSArray;

@interface MPModelLibraryStoreIDsImportChangeRequestOperation : MPAsyncOperation {

	BOOL _shouldLibraryAdd;
	MPMediaLibrary* _mediaLibrary;
	MPModelObject* _referralObject;
	NSArray* _storeIDs;
	/*^block*/id _responseHandler;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;               //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) MPModelObject * referralObject;              //@synthesize referralObject=_referralObject - In the implementation block
@property (nonatomic,copy) NSArray * storeIDs;                            //@synthesize storeIDs=_storeIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldLibraryAdd;                       //@synthesize shouldLibraryAdd=_shouldLibraryAdd - In the implementation block
@property (nonatomic,copy) id responseHandler;                            //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(NSArray *)storeIDs;
-(BOOL)shouldLibraryAdd;
-(void)setShouldLibraryAdd:(BOOL)arg1 ;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(MPModelObject *)referralObject;
-(void)setReferralObject:(MPModelObject *)arg1 ;
@end

