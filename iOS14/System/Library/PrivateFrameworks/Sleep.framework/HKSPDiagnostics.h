/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@class NSString, HKSPObserverSet;

@interface HKSPDiagnostics : NSObject {

	NSString* _label;
	HKSPObserverSet* _providers;

}

@property (nonatomic,copy,readonly) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * providers;              //@synthesize providers=_providers - In the implementation block
-(HKSPObserverSet *)providers;
-(id)initWithLabel:(id)arg1 ;
-(void)removeProvider:(id)arg1 ;
-(void)_registerStateHandler;
-(void)addProvider:(id)arg1 ;
-(NSString *)label;
@end

