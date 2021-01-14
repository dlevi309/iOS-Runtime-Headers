/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXPresentationAttributesManager.h>

@protocol SXPresentationAttributesManager <SXPresentationAttributesProvider>
@required
-(void)updateAttributes:(id)arg1;

@end


@class SXPresentationAttributes, NSHashTable, NSString;

@interface SXPresentationAttributesManager : NSObject <SXPresentationAttributesManager> {

	SXPresentationAttributes* _presentationAttributes;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) SXPresentationAttributes * presentationAttributes;              //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(SXPresentationAttributes *)presentationAttributes;
-(NSHashTable *)observers;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)attributesChangedFrom:(id)arg1 to:(id)arg2 ;
-(void)updateAttributes:(id)arg1 ;
@end

