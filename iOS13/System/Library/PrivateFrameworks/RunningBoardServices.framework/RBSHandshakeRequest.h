/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSSet, NSString;

@interface RBSHandshakeRequest : NSObject <BSXPCSecureCoding> {

	unsigned _euid;
	NSSet* _assertionDescriptors;

}

@property (nonatomic,retain) NSSet * assertionDescriptors;              //@synthesize assertionDescriptors=_assertionDescriptors - In the implementation block
@property (assign,nonatomic) unsigned euid;                             //@synthesize euid=_euid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)euid;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(void)setAssertionDescriptors:(NSSet *)arg1 ;
-(void)setEuid:(unsigned)arg1 ;
-(NSSet *)assertionDescriptors;
@end

