/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SXLayoutOptions *)options;
-(id<SXConditionHints>)hints;
-(id)initWithLayoutOptions:(id)arg1 hints:(id)arg2 ;
@end

