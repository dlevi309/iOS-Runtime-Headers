/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString;

@interface SBSUnlockOptions : NSObject <BSXPCCoding, BSXPCSecureCoding> {

	BOOL _aboveOtherContexts;

}

@property (assign,setter=_setAboveOtherContexts:,nonatomic) BOOL _aboveOtherContexts;              //@synthesize aboveOtherContexts=_aboveOtherContexts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)_aboveOtherContexts;
-(void)_setAboveOtherContexts:(BOOL)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

