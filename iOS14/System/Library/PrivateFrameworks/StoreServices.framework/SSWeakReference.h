/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface SSWeakReference : NSObject {

	id _object;
	unsigned long long _objectAddress;

}

@property (nonatomic,readonly) id object; 
+(id)weakReferenceWithObject:(id)arg1 ;
-(id)object;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

