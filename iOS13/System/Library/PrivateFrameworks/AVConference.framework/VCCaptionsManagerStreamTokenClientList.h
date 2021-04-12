/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCCaptionsSource;
@class NSMutableArray, NSArray;

@interface VCCaptionsManagerStreamTokenClientList : NSObject {

	long long _streamToken;
	id<VCCaptionsSource> _captionsSource;
	NSMutableArray* _clientContextList;

}

@property (nonatomic,readonly) id<VCCaptionsSource> captionsSource;              //@synthesize captionsSource=_captionsSource - In the implementation block
@property (nonatomic,readonly) NSArray * clientContextList;                      //@synthesize clientContextList=_clientContextList - In the implementation block
+(BOOL)isValidContext:(id)arg1 ;
+(long long)streamTokenFromClientContext:(id)arg1 ;
-(void)dealloc;
-(void)removeContext:(id)arg1 ;
-(id)initWithStreamToken:(long long)arg1 captionsSource:(id)arg2 ;
-(id)newContext;
-(id<VCCaptionsSource>)captionsSource;
-(NSArray *)clientContextList;
@end

