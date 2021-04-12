/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFResourceNodeDelegate.h>

@protocol WFResourceNodeDelegate;
@class WFResource, NSArray, NSString;

@interface WFResourceNode : NSObject <WFResourceNodeDelegate> {

	WFResource* _resource;
	NSArray* _subnodes;
	id<WFResourceNodeDelegate> _delegate;

}

@property (nonatomic,readonly) WFResource * resource;                                 //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) NSArray * subnodes;                                    //@synthesize subnodes=_subnodes - In the implementation block
@property (assign,nonatomic,__weak) id<WFResourceNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodesWithDefinitions:(id)arg1 ;
-(void)dealloc;
-(id<WFResourceNodeDelegate>)delegate;
-(void)setDelegate:(id<WFResourceNodeDelegate>)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(id)initWithResource:(id)arg1 ;
-(WFResource *)resource;
-(NSArray *)subnodes;
-(void)resourceNodeAvailabilityChanged:(id)arg1 ;
-(id)initWithResource:(id)arg1 subnodes:(id)arg2 ;
-(void)resourceUpdated;
@end
