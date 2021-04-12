/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (assign,nonatomic) long long pseudoId; 
@property (nonatomic,copy) NSArray * matches; 
+(id)safe_initWithPseudoId:(long long)arg1 matches:(id)arg2 ;
-(NSArray *)matches;
-(void)setMatches:(NSArray *)arg1 ;
-(void)setPseudoId:(long long)arg1 ;
-(id)initWithPseudoId:(long long)arg1 matches:(id)arg2 ;
-(long long)pseudoId;
@end

