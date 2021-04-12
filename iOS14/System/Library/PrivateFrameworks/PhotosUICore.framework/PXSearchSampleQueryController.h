/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXSearchQueryControllerProtocol.h>

@class NSString;

@interface PXSearchSampleQueryController : NSObject <PXSearchQueryControllerProtocol> {

	/*^block*/id _sampleResultsHandler;

}

@property (nonatomic,copy,readonly) id sampleResultsHandler;              //@synthesize sampleResultsHandler=_sampleResultsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithResultsHandler:(/*^block*/id)arg1 ;
-(id)sampleResultsHandler;
-(void)performSearch:(id)arg1 ;
@end

