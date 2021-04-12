/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/


@class ASDPropertyAddress, ASDObject;

@interface ASDCustomProperty : NSObject {

	BOOL _settable;
	unsigned _propertyDataType;
	unsigned _qualifierDataType;
	ASDPropertyAddress* _address;
	ASDObject* _owner;

}

@property (assign,nonatomic,__weak) ASDObject * owner;                         //@synthesize owner=_owner - In the implementation block
@property (nonatomic,copy,readonly) ASDPropertyAddress * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) unsigned selector; 
@property (nonatomic,readonly) unsigned scope; 
@property (nonatomic,readonly) unsigned element; 
@property (nonatomic,readonly) unsigned propertyDataType;                      //@synthesize propertyDataType=_propertyDataType - In the implementation block
@property (nonatomic,readonly) unsigned qualifierDataType;                     //@synthesize qualifierDataType=_qualifierDataType - In the implementation block
@property (assign,getter=isSettable,nonatomic) BOOL settable;                  //@synthesize settable=_settable - In the implementation block
-(unsigned)scope;
-(unsigned)selector;
-(id)init;
-(ASDObject *)owner;
-(unsigned)element;
-(ASDPropertyAddress *)address;
-(void)setOwner:(ASDObject *)arg1 ;
-(id)value;
-(BOOL)isSettable;
-(unsigned)dataSizeWithQualifierSize:(unsigned)arg1 andQualifierData:(const void*)arg2 ;
-(unsigned)propertyDataType;
-(unsigned)qualifierDataType;
-(BOOL)getPropertyWithQualifierSize:(unsigned)arg1 qualifierData:(const void*)arg2 dataSize:(unsigned*)arg3 andData:(void*)arg4 forClient:(int)arg5 ;
-(BOOL)setPropertyWithQualifierSize:(unsigned)arg1 qualifierData:(const void*)arg2 dataSize:(unsigned)arg3 andData:(const void*)arg4 forClient:(int)arg5 ;
-(id)initWithSelector:(unsigned)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 propertyDataType:(unsigned)arg4 andQualifierDataType:(unsigned)arg5 ;
-(id)initWithAddress:(id)arg1 propertyDataType:(unsigned)arg2 qualifierDataType:(unsigned)arg3 ;
-(id)initWithSelector:(unsigned)arg1 propertyDataType:(unsigned)arg2 andQualifierDataType:(unsigned)arg3 ;
-(void)sendPropertyChangeNotification;
-(void)setSettable:(BOOL)arg1 ;
@end

