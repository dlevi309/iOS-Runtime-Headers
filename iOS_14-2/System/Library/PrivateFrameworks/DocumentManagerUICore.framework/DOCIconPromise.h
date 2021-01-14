/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <libobjc.A.dylib/DOCThumbnail.h>

@class UIImage, DOCThumbnailRequest, NSString;

@interface DOCIconPromise : NSObject <DOCThumbnail> {

	UIImage* _icon;
	DOCThumbnailRequest* _request;

}

@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL isRepresentativeIcon; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addListener:(id)arg1 ;
-(UIImage *)thumbnail;
-(BOOL)isLoading;
-(id)initWithRequest:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(BOOL)isRepresentativeIcon;
-(void)scheduleUpdateIfNeeded;
-(id)averageColorInRect:(CGRect)arg1 ;
-(BOOL)registerGenerationCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasFinishedTryingToFetchCorrectThumbnail;
@end

