/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IXUninstallOptions : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requestUserConfirmation;
	BOOL _waitForDeletion;
	BOOL _showArchiveOption;

}

@property (assign,nonatomic) BOOL requestUserConfirmation;              //@synthesize requestUserConfirmation=_requestUserConfirmation - In the implementation block
@property (assign,nonatomic) BOOL waitForDeletion;                      //@synthesize waitForDeletion=_waitForDeletion - In the implementation block
@property (assign,nonatomic) BOOL showArchiveOption;                    //@synthesize showArchiveOption=_showArchiveOption - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setRequestUserConfirmation:(BOOL)arg1 ;
-(void)setShowArchiveOption:(BOOL)arg1 ;
-(BOOL)waitForDeletion;
-(void)setWaitForDeletion:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)requestUserConfirmation;
-(BOOL)showArchiveOption;
@end

