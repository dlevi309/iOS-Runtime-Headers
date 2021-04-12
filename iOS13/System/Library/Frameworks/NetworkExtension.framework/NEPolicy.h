/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NEPolicyResult *)result;
-(unsigned)order;
-(void)setResult:(NEPolicyResult *)arg1 ;
-(void)setOrder:(unsigned)arg1 ;
-(BOOL)validate;
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithOrder:(unsigned)arg1 result:(id)arg2 conditions:(id)arg3 ;
-(BOOL)addTLVsToMessage:(id)arg1 ;
@end

