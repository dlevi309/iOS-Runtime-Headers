/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFIconDescriptor.h>

@class NSString, NSNumber;

@interface HFIncrementalStateIconDescriptor : NSObject <HFIconDescriptor> {

	BOOL _shouldForceLTR;
	NSString* _identifier;
	NSNumber* _incrementalState;

}

@property (nonatomic,readonly) NSNumber * incrementalState;              //@synthesize incrementalState=_incrementalState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceLTR;                      //@synthesize shouldForceLTR=_shouldForceLTR - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)shouldForceLTR;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg1 ;
-(NSNumber *)incrementalState;
-(id)initWithIdentifier:(id)arg1 incrementalState:(id)arg2 ;
@end

