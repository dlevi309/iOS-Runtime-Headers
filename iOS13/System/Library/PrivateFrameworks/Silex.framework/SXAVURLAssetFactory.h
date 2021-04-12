/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAVURLAssetFactory.h>

@protocol SXAVURLAssetFactory <NSObject>
@required
-(id)createURLAssetWithURL:(id)arg1;

@end


@class NSDictionary, NSString;

@interface SXAVURLAssetFactory : NSObject <SXAVURLAssetFactory> {

	NSDictionary* _options;

}

@property (nonatomic,copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)options;
-(id)initWithOptions:(id)arg1 ;
-(id)createURLAssetWithURL:(id)arg1 ;
@end

