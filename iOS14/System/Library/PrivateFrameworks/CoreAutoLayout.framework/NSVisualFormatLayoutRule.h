/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSString, NSDictionary, NSLayoutRect;

@interface NSVisualFormatLayoutRule : NSObject <NSLayoutRule> {

	NSString* _visualFormatString;
	unsigned long long _formatOptions;
	NSDictionary* _metricMapping;
	NSDictionary* _rectMapping;
	NSLayoutRect* _containerRect;

}

@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5 ;
+(id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
-(NSString *)description;
-(unsigned long long)hash;
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

