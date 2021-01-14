/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2RequestContext.h>

@interface NEIKEv2DeleteChildContext : NEIKEv2RequestContext {

	unsigned _childID;

}

@property (assign,nonatomic) unsigned childID;              //@synthesize childID=_childID - In the implementation block
-(unsigned)childID;
-(id)description;
-(id)initWithDeleteChildID:(unsigned)arg1 ;
-(void)setChildID:(unsigned)arg1 ;
@end

