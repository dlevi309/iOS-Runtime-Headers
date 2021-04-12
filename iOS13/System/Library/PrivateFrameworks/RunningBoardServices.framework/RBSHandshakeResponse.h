/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class RBSProcessHandle, NSDictionary, NSString;

@interface RBSHandshakeResponse : NSObject <BSXPCSecureCoding> {

	RBSProcessHandle* _handle;
	NSDictionary* _assertionIdentifiersByOldIdentifier;
	NSDictionary* _assertionErrorsByOldIdentifier;

}

@property (nonatomic,retain) RBSProcessHandle * handle;                                       //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSDictionary * assertionIdentifiersByOldIdentifier;              //@synthesize assertionIdentifiersByOldIdentifier=_assertionIdentifiersByOldIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * assertionErrorsByOldIdentifier;                   //@synthesize assertionErrorsByOldIdentifier=_assertionErrorsByOldIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(RBSProcessHandle *)handle;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSDictionary *)assertionIdentifiersByOldIdentifier;
-(NSDictionary *)assertionErrorsByOldIdentifier;
-(void)setHandle:(RBSProcessHandle *)arg1 ;
-(void)setAssertionIdentifiersByOldIdentifier:(NSDictionary *)arg1 ;
-(void)setAssertionErrorsByOldIdentifier:(NSDictionary *)arg1 ;
@end

