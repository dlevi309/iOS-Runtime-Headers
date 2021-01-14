/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGPortraitRequestProtocol.h>

@class PPInternalRequestHandler;

@interface SGPortraitRequestHandler : NSObject <SGPortraitRequestProtocol> {

	PPInternalRequestHandler* _intRequestHandler;

}
-(id)init;
-(void)extractionsFromUserAction:(id)arg1 searchableItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)extractionsFromSearchableItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_extractionsFromPipelineEntity:(id)arg1 pipeline:(id*)arg2 ;
@end

