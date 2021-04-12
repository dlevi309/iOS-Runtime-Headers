/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVisiblePercentageProviding.h>

@class SXViewport, NSString;

@interface SXComponentVisiblePercentageProvider : NSObject <SXVisiblePercentageProviding> {

	SXViewport* _viewport;

}

@property (nonatomic,readonly) SXViewport * viewport;               //@synthesize viewport=_viewport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewport:(id)arg1 ;
-(SXViewport *)viewport;
-(double)visiblePercentageOfObject:(id)arg1 ;
@end

