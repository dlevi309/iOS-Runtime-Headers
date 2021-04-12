/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSArray, NSString;

@interface RBSProcessStateDescriptor : NSObject <RBSXPCSecureCoding, NSCopying> {

	NSSet* _endowmentNamespaces;
	unsigned long long _values;

}

@property (assign,nonatomic) unsigned long long values;                //@synthesize values=_values - In the implementation block
@property (nonatomic,copy) NSArray * endowmentNamespaces; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
+(id)descriptor;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(unsigned long long)values;
-(void)filterState:(id)arg1 ;
-(NSString *)debugDescription;
-(id)_endowmentNamespaces;
-(void)setValues:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)setEndowmentNamespaces:(NSArray *)arg1 ;
-(NSArray *)endowmentNamespaces;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

