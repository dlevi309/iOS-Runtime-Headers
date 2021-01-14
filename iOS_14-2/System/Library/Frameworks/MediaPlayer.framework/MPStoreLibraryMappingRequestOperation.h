/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView, NSArray;

@interface MPStoreLibraryMappingRequestOperation : MPAsyncOperation {

	MPMediaLibraryView* _libraryView;
	Class _modelClass;
	NSArray* _identifierSets;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPMediaLibraryView * libraryView;              //@synthesize libraryView=_libraryView - In the implementation block
@property (assign,nonatomic) Class modelClass;                            //@synthesize modelClass=_modelClass - In the implementation block
@property (nonatomic,copy) NSArray * identifierSets;                      //@synthesize identifierSets=_identifierSets - In the implementation block
@property (nonatomic,copy) id responseHandler;                            //@synthesize responseHandler=_responseHandler - In the implementation block
+(BOOL)supportsModelClass:(Class)arg1 ;
-(void)execute;
-(MPMediaLibraryView *)libraryView;
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(NSArray *)identifierSets;
-(void)setModelClass:(Class)arg1 ;
-(Class)modelClass;
-(void)setIdentifierSets:(NSArray *)arg1 ;
@end

