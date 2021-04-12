/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BSProcessHandle, NSString;

@interface SBSRemoteAlertPresentationTarget : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {

	BOOL _shouldDismissOnUILock;
	BSProcessHandle* _targetProcess;

}

@property (nonatomic,readonly) BSProcessHandle * targetProcess;              //@synthesize targetProcess=_targetProcess - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissOnUILock;                     //@synthesize shouldDismissOnUILock=_shouldDismissOnUILock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithTargetProcess:(id)arg1 ;
-(void)setShouldDismissOnUILock:(BOOL)arg1 ;
-(BSProcessHandle *)targetProcess;
-(BOOL)shouldDismissOnUILock;
@end

