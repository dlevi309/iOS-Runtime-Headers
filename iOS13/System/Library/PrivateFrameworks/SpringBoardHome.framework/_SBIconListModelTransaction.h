/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class NSMutableSet, NSString;

@interface _SBIconListModelTransaction : NSObject {

	NSMutableSet* _addedNodeIdentifiers;
	NSMutableSet* _deletedNodeIdentifiers;
	NSString* _requestID;

}

@property (nonatomic,copy,readonly) NSString * requestID;              //@synthesize requestID=_requestID - In the implementation block
-(id)initWithRequestID:(id)arg1 ;
-(NSString *)requestID;
-(void)addNodeIdentifiers:(id)arg1 ;
-(void)removeNodeIdentifiers:(id)arg1 ;
-(void)commitChangesToObservers:(id)arg1 forNode:(id)arg2 ;
@end

