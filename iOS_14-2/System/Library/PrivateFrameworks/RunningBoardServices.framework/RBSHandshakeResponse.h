/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class RBSProcessHandle, NSDictionary, NSString;

@interface RBSHandshakeResponse : NSObject <RBSXPCSecureCoding> {

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
+(BOOL)supportsRBSXPCSecureCoding;
-(void)setHandle:(RBSProcessHandle *)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(RBSProcessHandle *)handle;
-(NSDictionary *)assertionErrorsByOldIdentifier;
-(NSDictionary *)assertionIdentifiersByOldIdentifier;
-(void)setAssertionErrorsByOldIdentifier:(NSDictionary *)arg1 ;
-(void)setAssertionIdentifiersByOldIdentifier:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

