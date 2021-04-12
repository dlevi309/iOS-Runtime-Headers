/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/


@class NSSet, PDSRequestInfo;

@interface PDSRequest : NSObject {

	NSSet* _entries;
	PDSRequestInfo* _requestInfo;

}

@property (nonatomic,readonly) NSSet * entries;                         //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) PDSRequestInfo * requestInfo;              //@synthesize requestInfo=_requestInfo - In the implementation block
-(NSSet *)entries;
-(id)description;
-(unsigned long long)hash;
-(PDSRequestInfo *)requestInfo;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRequestInfo:(PDSRequestInfo *)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithEntries:(id)arg1 requestInfo:(id)arg2 ;
@end

