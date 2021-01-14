/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


#import <MediaControls/MediaControls-Structs.h>
@class MediaControlsEndpointController, NSString;

@interface MRUTVRemoteController : NSObject {

	BOOL _isCoverSheet;
	MediaControlsEndpointController* _endpointController;

}

@property (nonatomic,readonly) MediaControlsEndpointController * endpointController;              //@synthesize endpointController=_endpointController - In the implementation block
@property (nonatomic,readonly) NSString * mediaRemoteIdentifier; 
@property (nonatomic,readonly) NSString * airplayIdentifier; 
@property (nonatomic,readonly) BOOL shouldShowTVRemoteButton; 
@property (assign,nonatomic) BOOL isCoverSheet;                                                   //@synthesize isCoverSheet=_isCoverSheet - In the implementation block
-(NSString *)mediaRemoteIdentifier;
-(void)presentTVRemote;
-(MediaControlsEndpointController *)endpointController;
-(BOOL)shouldShowTVRemoteButton;
-(void)prewarmIfNeeded;
-(id)initWithEndpointController:(id)arg1 ;
-(NSString *)airplayIdentifier;
-(void)presentLanguageOptionsAtCenter:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isCoverSheet;
-(void)setIsCoverSheet:(BOOL)arg1 ;
@end

