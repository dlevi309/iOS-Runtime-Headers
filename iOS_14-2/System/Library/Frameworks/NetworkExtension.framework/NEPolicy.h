/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEPolicyResult, NSArray;

@interface NEPolicy : NSObject <NEPrettyDescription> {

	unsigned _order;
	NEPolicyResult* _result;
	NSArray* _conditions;

}

@property (assign) unsigned order;                       //@synthesize order=_order - In the implementation block
@property (retain) NEPolicyResult * result;              //@synthesize result=_result - In the implementation block
@property (copy) NSArray * conditions;                   //@synthesize conditions=_conditions - In the implementation block
-(void)setResult:(NEPolicyResult *)arg1 ;
-(NSArray *)conditions;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)validate;
-(void)setConditions:(NSArray *)arg1 ;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(id)init;
-(id)initWithOrder:(unsigned)arg1 result:(id)arg2 conditions:(id)arg3 ;
-(id)description;
-(NEPolicyResult *)result;
-(unsigned)order;
-(void)setOrder:(unsigned)arg1 ;
@end

