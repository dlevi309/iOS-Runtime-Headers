/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SXConditionHints;
@class SXLayoutOptions;

@interface SXDOMCacheKey : NSObject <NSCopying> {

	SXLayoutOptions* _options;
	id<SXConditionHints> _hints;

}

@property (nonatomic,readonly) SXLayoutOptions * options;               //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) id<SXConditionHints> hints;              //@synthesize hints=_hints - In the implementation block
-(id<SXConditionHints>)hints;
-(SXLayoutOptions *)options;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLayoutOptions:(id)arg1 hints:(id)arg2 ;
@end

