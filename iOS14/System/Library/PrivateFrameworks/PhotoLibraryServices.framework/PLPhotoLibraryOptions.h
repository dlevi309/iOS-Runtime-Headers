/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PLPhotoLibraryOptions : NSObject <NSSecureCoding> {

	BOOL _automaticallyMergesContext;
	BOOL _preventsWaitingForRequiredState;
	long long _requiredState;
	unsigned long long _libraryRole;
	unsigned long long _libraryInitiator;

}

@property (assign,nonatomic) BOOL automaticallyMergesContext;                   //@synthesize automaticallyMergesContext=_automaticallyMergesContext - In the implementation block
@property (assign,nonatomic) long long requiredState;                           //@synthesize requiredState=_requiredState - In the implementation block
@property (assign,nonatomic) unsigned long long libraryRole;                    //@synthesize libraryRole=_libraryRole - In the implementation block
@property (assign,nonatomic) BOOL preventsWaitingForRequiredState;              //@synthesize preventsWaitingForRequiredState=_preventsWaitingForRequiredState - In the implementation block
@property (assign,nonatomic) unsigned long long libraryInitiator;               //@synthesize libraryInitiator=_libraryInitiator - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequiredState:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)automaticallyMergesContext;
-(unsigned long long)libraryInitiator;
-(unsigned long long)libraryRole;
-(void)setAutomaticallyMergesContext:(BOOL)arg1 ;
-(void)setLibraryInitiator:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)preventsWaitingForRequiredState;
-(void)setPreventsWaitingForRequiredState:(BOOL)arg1 ;
-(long long)requiredState;
-(void)setLibraryRole:(unsigned long long)arg1 ;
@end

