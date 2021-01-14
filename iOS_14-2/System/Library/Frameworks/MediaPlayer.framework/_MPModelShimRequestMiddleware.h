/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPMiddleware.h>

@class NSArray, MPModelResponse, NSString;

@interface _MPModelShimRequestMiddleware : NSObject <MPMiddleware> {

	NSArray* _invalidationObservers;
	MPModelResponse* _modelResponse;

}

@property (nonatomic,retain) MPModelResponse * modelResponse;              //@synthesize modelResponse=_modelResponse - In the implementation block
@property (nonatomic,retain) NSArray * invalidationObservers;              //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setModelResponse:(MPModelResponse *)arg1 ;
-(MPModelResponse *)modelResponse;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(NSArray *)invalidationObservers;
-(id)operationsForRequest:(id)arg1 ;
@end

