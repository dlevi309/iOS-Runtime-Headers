/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageSearchResult : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * frameId; 
@property (assign,nonatomic) double matchesCount; 
@property (nonatomic,copy) NSString * requestId; 
+(id)safe_initWithUrl:(id)arg1 frameId:(id)arg2 matchesCount:(double)arg3 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)requestId;
-(double)matchesCount;
-(void)setFrameId:(NSString *)arg1 ;
-(void)setRequestId:(NSString *)arg1 ;
-(NSString *)frameId;
-(void)setMatchesCount:(double)arg1 ;
-(id)initWithUrl:(id)arg1 frameId:(id)arg2 matchesCount:(double)arg3 ;
@end

