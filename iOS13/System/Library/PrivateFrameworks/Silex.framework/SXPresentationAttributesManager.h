/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXPresentationAttributes * presentationAttributes;              //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(SXPresentationAttributes *)presentationAttributes;
-(void)updateAttributes:(id)arg1 ;
-(void)attributesChangedFrom:(id)arg1 to:(id)arg2 ;
@end

