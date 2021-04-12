/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSSet, NSObject;

@interface SXAXCustomRotorProvider : NSObject {

	NSSet* _cachedAvailableRotors;
	NSObject* _rootElement;

}

@property (assign,nonatomic,__weak) NSObject * rootElement;                     //@synthesize rootElement=_rootElement - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cachedAvailableRotors;              //@synthesize cachedAvailableRotors=_cachedAvailableRotors - In the implementation block
-(id)init;
-(void)setRootElement:(NSObject *)arg1 ;
-(NSObject *)rootElement;
-(id)initWithRootElement:(id)arg1 ;
-(id)graphSearchForAvailableCustomRotorsAndUpdateCache;
-(NSSet *)cachedAvailableRotors;
@end

