/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@interface BSZeroingWeakReference : NSObject {

	id _object;
	Class _objectClass;
	unsigned long long _objectAddress;

}

@property (assign,nonatomic) Class objectClass;                             //@synthesize objectClass=_objectClass - In the implementation block
@property (assign,nonatomic) unsigned long long objectAddress;              //@synthesize objectAddress=_objectAddress - In the implementation block
@property (nonatomic,__weak,readonly) id object; 
+(id)referenceWithObject:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(Class)objectClass;
-(void)setObjectAddress:(unsigned long long)arg1 ;
-(unsigned long long)objectAddress;
-(void)setObjectClass:(Class)arg1 ;
@end

