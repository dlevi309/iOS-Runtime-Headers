/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/


@protocol OS_dispatch_queue, ASDPropertyChangedDelegate;
#import <AudioServerDriver/AudioServerDriver-Structs.h>
@class NSMutableArray, NSObject, ASDPlugin, NSString, NSArray;

@interface ASDObject : NSObject {

	NSMutableArray* _customProperties;
	NSObject*<OS_dispatch_queue> _customPropertyQueue;
	unsigned long long _stateDumpHandler;
	unsigned _objectID;
	ASDObject* _owner;
	ASDPlugin* _plugin;
	id<ASDPropertyChangedDelegate> _propertyChangedDelegate;

}

@property (assign,nonatomic) unsigned objectID;                                                          //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic,__weak) ASDObject * owner;                                                   //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic,__weak) ASDPlugin * plugin;                                                  //@synthesize plugin=_plugin - In the implementation block
@property (assign,nonatomic,__weak) id<ASDPropertyChangedDelegate> propertyChangedDelegate;              //@synthesize propertyChangedDelegate=_propertyChangedDelegate - In the implementation block
@property (nonatomic,readonly) unsigned baseClass; 
@property (nonatomic,readonly) unsigned objectClass; 
@property (nonatomic,__weak,readonly) NSString * driverClassName; 
@property (nonatomic,readonly) NSArray * customProperties; 
-(id)init;
-(void)dealloc;
-(void)setOwner:(ASDObject *)arg1 ;
-(ASDObject *)owner;
-(unsigned)objectID;
-(unsigned)objectClass;
-(void)setObjectID:(unsigned)arg1 ;
-(NSArray *)customProperties;
-(ASDPlugin *)plugin;
-(void)setPlugin:(ASDPlugin *)arg1 ;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(BOOL)isKindOfAudioClass:(unsigned)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(unsigned)baseClass;
-(NSString *)driverClassName;
-(void)setupDiagnosticStateDumpHandlerWithTreeWalk:(BOOL)arg1 ;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(id<ASDPropertyChangedDelegate>)propertyChangedDelegate;
-(void)addCustomProperty:(id)arg1 ;
-(void)removeCustomProperty:(id)arg1 ;
-(void)setPropertyChangedDelegate:(id<ASDPropertyChangedDelegate>)arg1 ;
@end

