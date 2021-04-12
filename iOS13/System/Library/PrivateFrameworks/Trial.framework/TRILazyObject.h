/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


@interface TRILazyObject : NSObject {

	BOOL _isInitialized;
	/*^block*/id _getter;
	id _object;

}

@property (readonly) id object; 
+(id)objectWithGetter:(/*^block*/id)arg1 ;
-(id)object;
-(void)reset;
-(id)initWithGetter:(/*^block*/id)arg1 ;
@end

