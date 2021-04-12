/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDate, NSString;

@interface RBPowerAssertion : NSObject <BSDescriptionProviding> {

	unsigned _identifier;
	NSDate* _acquisitionDate;
	NSString* _name;
	NSString* _baseName;
	BOOL _invalidated;

}

@property (nonatomic,readonly) unsigned identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * acquisitionDate;              //@synthesize acquisitionDate=_acquisitionDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_nameForPreventIdleSleepIdentifiers:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(unsigned)identifier;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)invalidateWithHandler:(/*^block*/id)arg1 ;
-(id)_preventIdleSleepIdentifiers;
-(int)_targetPid;
-(id)_calculateNewName;
-(void)updateWithAcquisitionHandler:(/*^block*/id)arg1 invalidationHander:(/*^block*/id)arg2 ;
-(NSDate *)acquisitionDate;
@end

