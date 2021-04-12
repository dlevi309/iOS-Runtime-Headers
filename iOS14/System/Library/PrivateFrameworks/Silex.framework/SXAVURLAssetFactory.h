/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithOptions:(id)arg1 ;
-(NSDictionary *)options;
-(id)createURLAssetWithURL:(id)arg1 ;
@end

