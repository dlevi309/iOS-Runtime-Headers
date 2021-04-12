/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSArray, NSString;

@interface SCRCMathArrayExpression : SCRCMathExpression {

	NSArray* _children;

}

@property (nonatomic,readonly) NSString * mathMLTag; 
@property (nonatomic,readonly) NSArray * mathMLAttributes; 
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)children;
-(id)mathMLString;
-(NSArray *)mathMLAttributes;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)prefixForChildAtIndex:(unsigned long long)arg1 ;
-(id)suffixForChildAtIndex:(unsigned long long)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)childSpeakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long*)arg4 ;
-(NSString *)mathMLTag;
-(id)localizablePrefixForChildAtIndex:(unsigned long long)arg1 ;
-(id)localizableSuffixForChildAtIndex:(unsigned long long)arg1 ;
-(id)subExpressions;
-(BOOL)hasSimpleArrayOfChildren;
@end

