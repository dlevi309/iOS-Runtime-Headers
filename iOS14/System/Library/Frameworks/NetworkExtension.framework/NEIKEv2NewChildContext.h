/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2RequestContext.h>

@class NEIKEv2ChildSA;

@interface NEIKEv2NewChildContext : NEIKEv2RequestContext {

	NEIKEv2ChildSA* _childSA;

}

@property (nonatomic,retain) NEIKEv2ChildSA * childSA;              //@synthesize childSA=_childSA - In the implementation block
-(void)setChildSA:(NEIKEv2ChildSA *)arg1 ;
-(NEIKEv2ChildSA *)childSA;
-(id)description;
-(id)initWithChildSA:(id)arg1 ;
@end

