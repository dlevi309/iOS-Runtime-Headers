/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BSProcessHandle *)targetProcess;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithTargetProcess:(id)arg1 ;
-(void)setShouldDismissOnUILock:(BOOL)arg1 ;
-(BOOL)shouldDismissOnUILock;
@end

