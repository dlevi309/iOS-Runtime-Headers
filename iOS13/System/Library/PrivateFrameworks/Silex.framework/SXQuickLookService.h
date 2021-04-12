/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXQuickLookService.h>

@protocol SXQuickLookService <NSObject>
@required
-(void)fetchThumbnailForFile:(id)arg1 size:(CGSize)arg2 onCompletion:(/*^block*/id)arg3 onError:(/*^block*/id)arg4;

@end


@class QLThumbnailGenerator, NSString;

@interface SXQuickLookService : NSObject <SXQuickLookService> {

	QLThumbnailGenerator* _generator;

}

@property (nonatomic,readonly) QLThumbnailGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(QLThumbnailGenerator *)generator;
-(void)fetchThumbnailForFile:(id)arg1 size:(CGSize)arg2 onCompletion:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
@end

