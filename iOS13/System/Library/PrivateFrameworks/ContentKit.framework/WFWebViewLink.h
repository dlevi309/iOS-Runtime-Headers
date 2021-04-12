/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


#import <ContentKit/ContentKit-Structs.h>
@class NSURL;

@interface WFWebViewLink : NSObject {

	NSURL* _href;
	CGRect _rect;

}

@property (nonatomic,readonly) NSURL * href;              //@synthesize href=_href - In the implementation block
@property (nonatomic,readonly) CGRect rect;               //@synthesize rect=_rect - In the implementation block
-(CGRect)rect;
-(NSURL *)href;
-(id)initWithHref:(id)arg1 rect:(CGRect)arg2 ;
@end

