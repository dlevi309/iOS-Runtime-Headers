/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class Protocol;

@interface _REInterfaceKey : NSObject <NSCopying> {

	Class _c;
	Protocol* _p;
	BOOL _isClass;
	Class _cls;
	Protocol* _protocol;

}

@property (nonatomic,retain) Class cls;                                      //@synthesize cls=_cls - In the implementation block
@property (nonatomic,retain) Protocol * protocol;                            //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) BOOL isProtocol; 
@property (nonatomic,readonly) _REInterfaceKey * superclassKey; 
-(void)setProtocol:(Protocol *)arg1 ;
-(Protocol *)protocol;
-(void)setCls:(Class)arg1 ;
-(id)initWithClass:(Class)arg1 ;
-(id)initWithProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)cls;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isProtocol;
-(void)enumerateAutomaticProperties:(/*^block*/id)arg1 ;
-(void)enumerateConformedProperties:(/*^block*/id)arg1 ;
-(void)enumerateExposedProperties:(/*^block*/id)arg1 ;
-(void)enumerateExposedMethods:(/*^block*/id)arg1 ;
-(_REInterfaceKey *)superclassKey;
-(BOOL)conforms:(id)arg1 ;
@end

