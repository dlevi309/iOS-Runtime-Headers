/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
*/


@class NSString;

@interface IOKObject : NSObject {

	unsigned _object;

}

@property (nonatomic,copy,readonly) NSString * ioClassName; 
@property (nonatomic,readonly) unsigned object;                          //@synthesize object=_object - In the implementation block
+(Class)classForRegistryEntry:(unsigned)arg1 ;
+(id)ioSuperClassNameForClassName:(id)arg1 ;
+(id)bundleIdentifierForClassName:(id)arg1 ;
-(id)init;
-(unsigned)object;
-(id)initWithIOObject:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)ioClassName;
-(BOOL)conformsToIOClassName:(id)arg1 ;
@end

