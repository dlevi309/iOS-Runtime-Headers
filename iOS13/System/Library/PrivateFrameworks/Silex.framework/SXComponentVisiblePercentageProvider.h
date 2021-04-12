/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SVVisiblePercentageProviding.h>

@class SXViewport, NSString;

@interface SXComponentVisiblePercentageProvider : NSObject <SVVisiblePercentageProviding> {

	SXViewport* _viewport;

}

@property (nonatomic,readonly) SXViewport * viewport;               //@synthesize viewport=_viewport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(double)visiblePercentageOfObject:(id)arg1 ;
-(id)initWithViewport:(id)arg1 ;
@end

