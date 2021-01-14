/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)newContext;
-(id)initWithStreamToken:(long long)arg1 captionsSource:(id)arg2 ;
-(id<VCCaptionsSource>)captionsSource;
-(NSArray *)clientContextList;
@end

