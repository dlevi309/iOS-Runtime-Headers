/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSCache;

@interface MKWebContentBlocker : NSObject {

	NSCache* _regularExpressionCache;

}
+(id)sharedBlocker;
-(id)_regularExpression;
-(BOOL)shouldBlockLoadingOfURL:(id)arg1 ;
@end

