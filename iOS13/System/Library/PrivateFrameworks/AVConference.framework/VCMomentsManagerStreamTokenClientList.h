/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCMomentsMessenger;
@class NSMutableArray, NSArray;

@interface VCMomentsManagerStreamTokenClientList : NSObject {

	long long _streamToken;
	id<VCMomentsMessenger> _messenger;
	NSMutableArray* _clientContextList;

}

@property (nonatomic,readonly) id<VCMomentsMessenger> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (nonatomic,readonly) NSArray * clientContextList;                   //@synthesize clientContextList=_clientContextList - In the implementation block
+(BOOL)isValidContext:(id)arg1 ;
+(long long)streamTokenFromClientContext:(id)arg1 ;
-(void)dealloc;
-(id<VCMomentsMessenger>)messenger;
-(void)removeContext:(id)arg1 ;
-(id)newContext;
-(NSArray *)clientContextList;
-(id)initWithStreamToken:(long long)arg1 messenger:(id)arg2 ;
@end

