/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)href;
-(CGRect)rect;
-(id)initWithHref:(id)arg1 rect:(CGRect)arg2 ;
@end

