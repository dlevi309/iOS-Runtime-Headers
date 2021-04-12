/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPMiddleware.h>

@class NSArray, MPModelResponse, NSString;

@interface _MPModelShimRequestMiddleware : NSObject <MPMiddleware> {

	NSArray* _invalidationObservers;
	MPModelResponse* _modelResponse;

}

@property (nonatomic,retain) MPModelResponse * modelResponse;              //@synthesize modelResponse=_modelResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * invalidationObservers;              //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(NSArray *)invalidationObservers;
-(void)setModelResponse:(MPModelResponse *)arg1 ;
-(id)operationsForRequest:(id)arg1 ;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(MPModelResponse *)modelResponse;
@end

