/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


#import <AppStoreComponents/AppStoreComponents-Structs.h>
@class NSURLSession, ASCTaskCoordinator;

@interface ASCArtworkFetcher : NSObject {

	NSURLSession* _urlSession;
	double _scale;
	ASCTaskCoordinator* _fetchCoordinator;

}

@property (nonatomic,readonly) NSURLSession * urlSession;                          //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) double scale;                                       //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) ASCTaskCoordinator * fetchCoordinator;              //@synthesize fetchCoordinator=_fetchCoordinator - In the implementation block
+(id)sharedFetcher;
-(id)dataWithContentsOfURL:(id)arg1 ;
-(double)scale;
-(NSURLSession *)urlSession;
-(id)imageWithContentsOfURL:(id)arg1 ;
-(ASCTaskCoordinator *)fetchCoordinator;
-(id)imageForContentsOfArtwork:(id)arg1 withSize:(CGSize)arg2 ;
-(id)initWithURLSession:(id)arg1 scale:(double)arg2 ;
-(id)URLWithContentsOfArtwork:(id)arg1 preferredSize:(CGSize)arg2 ;
@end

