/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@interface CUTWeakReference : NSObject {

	id _object;
	unsigned long long _objectAddress;

}

@property (assign,nonatomic,__weak) id object;                              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long objectAddress;              //@synthesize objectAddress=_objectAddress - In the implementation block
+(id)weakRefWithObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setObjectAddress:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)objectAddress;
-(BOOL)isEqual:(id)arg1 ;
@end

