/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
*/

#import <MechanismBase/MechanismBase.h>

@class NSNumber;

@interface MechanismKofNReorganizer : MechanismBase {

	/*^block*/id _apply;
	long long _min;
	long long _max;
	NSNumber* _k;

}

@property (nonatomic,readonly) long long min;               //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) long long max;               //@synthesize max=_max - In the implementation block
@property (k,nonatomic,readonly) NSNumber * k;              //@synthesize k=_k - In the implementation block
-(long long)max;
-(long long)min;
-(NSNumber *)k;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithMin:(long long)arg1 max:(long long)arg2 k:(id)arg3 apply:(/*^block*/id)arg4 ;
-(id)reorganizeMechanisms:(id)arg1 k:(long long)arg2 error:(id*)arg3 ;
@end

