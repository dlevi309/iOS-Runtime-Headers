/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (assign,nonatomic) long long pseudoId; 
@property (nonatomic,copy) NSArray * matches; 
+(id)safe_initWithPseudoId:(long long)arg1 matches:(id)arg2 ;
-(void)setMatches:(NSArray *)arg1 ;
-(NSArray *)matches;
-(void)setPseudoId:(long long)arg1 ;
-(id)initWithPseudoId:(long long)arg1 matches:(id)arg2 ;
-(long long)pseudoId;
@end

