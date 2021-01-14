/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)matchesCount;
-(NSString *)url;
-(void)setRequestId:(NSString *)arg1 ;
-(NSString *)requestId;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)frameId;
-(void)setFrameId:(NSString *)arg1 ;
-(void)setMatchesCount:(double)arg1 ;
-(id)initWithUrl:(id)arg1 frameId:(id)arg2 matchesCount:(double)arg3 ;
@end

