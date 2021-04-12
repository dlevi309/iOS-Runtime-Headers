/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/


@interface NFWeakReference : NSObject {

	id _store;

}

@property (assign,setter=setObject:,getter=getObject,nonatomic) id object; 
+(id)weakReferenceWithObject:(id)arg1 ;
-(void)dealloc;
-(id)initWithObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)getObject;
@end

