/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class NSSet, NSString;

@interface RBSHandshakeRequest : NSObject <RBSXPCSecureCoding> {

	unsigned _euid;
	NSSet* _assertionDescriptors;

}

@property (nonatomic,retain) NSSet * assertionDescriptors;              //@synthesize assertionDescriptors=_assertionDescriptors - In the implementation block
@property (assign,nonatomic) unsigned euid;                             //@synthesize euid=_euid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(void)setEuid:(unsigned)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(unsigned)euid;
-(unsigned long long)hash;
-(void)setAssertionDescriptors:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)assertionDescriptors;
@end

