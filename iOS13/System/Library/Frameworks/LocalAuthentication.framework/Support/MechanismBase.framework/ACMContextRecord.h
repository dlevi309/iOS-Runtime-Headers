/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
*/


@protocol LAContextExternalizationProt;
#import <MechanismBase/MechanismBase-Structs.h>
@interface ACMContextRecord : NSObject {

	unsigned _passphrasePurpose;
	ACMHandleRef _context;
	id<LAContextExternalizationProt> _cachedExternalizationDelegate;
	unsigned long long _flags;

}

@property (nonatomic,readonly) ACMHandleRef context;                                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) id<LAContextExternalizationProt> cachedExternalizationDelegate;              //@synthesize cachedExternalizationDelegate=_cachedExternalizationDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                                             //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned passphrasePurpose;                                                           //@synthesize passphrasePurpose=_passphrasePurpose - In the implementation block
-(unsigned long long)flags;
-(ACMHandleRef)context;
-(void)setFlags:(unsigned long long)arg1 ;
-(id<LAContextExternalizationProt>)cachedExternalizationDelegate;
-(id)initWithACMContext:(ACMHandleRef)arg1 cachedExternalizationDelegate:(id)arg2 ;
-(unsigned)passphrasePurpose;
-(void)setPassphrasePurpose:(unsigned)arg1 ;
@end

