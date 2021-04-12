/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSArray, NSString;

@interface RBSProcessStateDescriptor : NSObject <BSXPCSecureCoding, NSCopying> {

	NSSet* _endowmentNamespaces;
	unsigned long long _values;

}

@property (assign,nonatomic) unsigned long long values;                //@synthesize values=_values - In the implementation block
@property (nonatomic,copy) NSArray * endowmentNamespaces; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptor;
+(BOOL)supportsBSXPCSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValues:(unsigned long long)arg1 ;
-(unsigned long long)values;
-(void)filterState:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_endowmentNamespaces;
-(void)setEndowmentNamespaces:(NSArray *)arg1 ;
-(NSArray *)endowmentNamespaces;
@end

